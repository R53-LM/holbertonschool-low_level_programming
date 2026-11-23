# Valgrind analysis

## heap_example

Commande : `valgrind --leak-check=full ... ./heap_example`

```
HEAP SUMMARY:
==835==     in use at exit: 6 bytes in 1 blocks
==835==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated
==835== 
==835== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==835==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==835==    by 0x4001211: person_new (heap_example.c:21)
==835==    by 0x40012FA: main (heap_example.c:51)
==835== 
==835== LEAK SUMMARY:
==835==    definitely lost: 6 bytes in 1 blocks
```

### Avertissement 
- Erreur : definitely lost, 6 octets dans 1 bloc
- Cycle de vie : alloué ligne 21 (person_new), appelé ligne 51 (main) → adresse gardée par p->name → jamais libéré car il manque un free(p->name)
- Chaîne causale : Valgrind dit definitely car à aucun moment il est possible dans des condition ou autres fonction de le libérer.
- Correction : free(p->name) avant return, dans la fonction person_new, à ??? par rapport au free de la structure

## aliasing_example

Commande : `valgrind --leak-check=full ... ./aliasing_example`

```
==1252== 
aliasing_example: aliasing and use-after-free (Valgrind should report it)
  a=0x4a91480 b=0x4a91480 a[2]=22 b[2]=22
  after free(a): b=0x4a91480 (dangling)
==1252== Invalid read of size 4
==1252==    at 0x40012F2: main (aliasing_example.c:42)
==1252==  Address 0x4a91488 is 8 bytes inside a block of size 20 free'd
==1252==    at 0x48538BF: free (vg_replace_malloc.c:990)
==1252==    by 0x40012CE: main (aliasing_example.c:38)
==1252==  Block was alloc'd at
==1252==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==1252==    by 0x40011E4: make_numbers (aliasing_example.c:12)
==1252==    by 0x4001272: main (aliasing_example.c:30)
==1252== 
  reading b[2]=22
==1252== Invalid write of size 4
==1252==    at 0x4001312: main (aliasing_example.c:44)
==1252==  Address 0x4a9148c is 12 bytes inside a block of size 20 free'd
==1252==    at 0x48538BF: free (vg_replace_malloc.c:990)
==1252==    by 0x40012CE: main (aliasing_example.c:38)
==1252==  Block was alloc'd at
==1252==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==1252==    by 0x40011E4: make_numbers (aliasing_example.c:12)
==1252==    by 0x4001272: main (aliasing_example.c:30)
==1252== 
==1252== Invalid read of size 4
==1252==    at 0x4001320: main (aliasing_example.c:45)
==1252==  Address 0x4a9148c is 12 bytes inside a block of size 20 free'd
==1252==    at 0x48538BF: free (vg_replace_malloc.c:990)
==1252==    by 0x40012CE: main (aliasing_example.c:38)
==1252==  Block was alloc'd at
==1252==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==1252==    by 0x40011E4: make_numbers (aliasing_example.c:12)
==1252==    by 0x4001272: main (aliasing_example.c:30)
==1252== 
  wrote b[3]=1234
==1252== 
==1252== HEAP SUMMARY:
==1252==     in use at exit: 0 bytes in 0 blocks
==1252==   total heap usage: 2 allocs, 2 frees, 1,044 bytes allocated
==1252== 
==1252== All heap blocks were freed -- no leaks are possible
==1252== 
==1252== For lists of detected and suppressed errors, rerun with: -s
==1252== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)
```
### Avertissement 
#### Le bloc

- Taille : 20 octets 
- Alloué ligne 12 (`make_numbers`) avec `arr = (int *)malloc((size_t)n * sizeof(int));`, appelé dans `main` ligne 30 (make_numbers)
- Libéré ligne 38 par `free(a)`
- Pointeurs qui le désignent : `a` et `b` (désignent le même bloc)

#### Chaîne causale (commune aux 3 erreurs)

1. main reçoit le bloc et copie l'adresse de make_numbers
2. `free(a)` libère le bloc, pas la variable `a`, et ne met ni `a` ni `b` à `NULL`
3. Libérer via `a` invalide aussi `b`, bien que `b` n'ait jamais été passé à `free`
4. `b` est utilisé après le `free(a)` : c'est ce qui déclenche les messages de Valgrind

#### Les erreurs

Valgrind résume : **3 errors from 3 contexts**.

| #   | Ligne | Lecture / écriture | Octet du bloc | Pourquoi invalide                  |
| --- | ----- | ------------------ | ------------- | ---------------------------------- |
| 1   | 42    | lecture (size 4)   | 8             | utilisation de `b` après `free(a)` |
| 2   | 44    | écriture (size 4)  | 12            | utilisation de `b` après `free(a)` |
| 3   | 45    | lecture (size 4)   | 12            | utilisation de `b` après `free(a)` |

Type d'erreur pour les trois : aliasing et use-after-free.

#### Gravité
L'écriture pourrai abîmé la mémoire dû à la modification après la libération

## Erreurs de l'IA
- L'IA a dit : « Ligne 44 : lecture invalide de 4 octets dans un bloc de 8 octets, libéré ligne 30. »
- Faux car : la trace dit « Invalid write » (écriture), « block of size 20 » (le 12 est une position), et « free'd at » indique la ligne 38 (la ligne 30 est l'appel de make_numbers).
- Vérifié en : relisant la trace, calculant 20 ÷ 4 = 5 int, et ouvrant aliasing_example.c aux lignes 12, 30, 38, 44.