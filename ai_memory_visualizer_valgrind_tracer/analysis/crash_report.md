# Crash report

## 1. Description du crash
- Programme, commande, signal 11 reçu (SIGSEGV), donc code retour 139, ligne de l'accès fautif: crash_example.c:32.
Accès:"Invalid write of size 4" à l'adresse 0x0. Valgrind dit aussi : « Address 0x0 is not stack'd, malloc'd or (recently) free'd »


## 2. Analyse de la cause racine
code (ligne ?) → valeur de ??? → opération (lecture/écriture/déréférencement) → adresse ??? → ???

ligne 25 : n = 0
→ ligne 30 : allocate_numbers(n) est appelée
→ ligne 9 : la condition « n <= 0 » est vrai donc la fonction fait return NULL
→ ligne 30 : nums reçoit 0
→ ligne 32 : nums[0] = 42 écrit à l'adresse pile
→ pas de test de nums entre les lignes 30 et 32
→ l'accès tombe dans une zone 0x0 → SIGSEGV

## 3. Pourquoi l'accès est invalide
- Mémoire concernée :  "total heap usage: 1 allocs, 0 frees, 1,024 bytes allocated" et "not stack'd, malloc'd or (recently) free'd" fait suite a nums (la variable) vit ??? et nums[0] vise ???
- Catégorie de comportement indéfini : Le comportement indéfini est le déréférencement d'un pointeur valant NULL, ici en écriture (ligne 32).. le déréférencement d'un pointeur NULL est un comportement non défini (Undefined Behavior). il peut planter, continuer silencieusement, corrompre la mémoire, ou même se comporter comme si le pointeur était valide.

## 4. Évaluation de l'IA

- **Correcte** : la cause principale (`n = 0` → `return NULL` l.10 → écriture `nums[0] = 42` l.32 sans test). Preuve : Valgrind indique « Invalid write of size 4 » à 0x0, ligne 32, et « not stack'd, malloc'd or (recently) free'd ».
- **Spéculative** : la cause « débordement de `n * sizeof(int)` ». Rien dans le code ne la prouve : `n` vaut 0, donc le `malloc` n'est même pas atteint.