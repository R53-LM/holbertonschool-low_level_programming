# C - Pointers, arrays and strings

Projet de la formation **Holberton School** (cursus développement web et web mobile) autour des **pointeurs**, des **tableaux** et des **chaînes de caractères** en langage C.

- **Dépôt GitHub** : `holbertonschool-low_level_programming`
- **Dossier** : `pointers_arrays_strings`

---

## Table des matières

1. [Objectifs d'apprentissage](#objectifs-dapprentissage)
2. [Notions clés](#notions-clés)
3. [Contraintes du projet](#contraintes-du-projet)
4. [Compilation](#compilation)
5. [Liste des fichiers](#liste-des-fichiers)
6. [Exemple de test](#exemple-de-test)
7. [Ressources](#ressources)

---

## Objectifs d'apprentissage

À la fin du projet, on doit savoir expliquer, sans aide extérieure :

| Notion | Ce qu'il faut savoir |
|---|---|
| Pointeurs | Ce que c'est et comment les utiliser |
| Tableaux | Ce que c'est et comment les utiliser |
| Pointeurs vs tableaux | Les différences entre les deux |
| Chaînes | Comment les utiliser et les manipuler |
| Portée des variables | Où une variable est visible et combien de temps elle existe |

---

## Notions clés

### Pointeurs

| Syntaxe | Signification |
|---|---|
| `int *p;` | `p` est un pointeur vers un `int` |
| `&x` | adresse de la variable `x` |
| `*p` | valeur située à l'adresse contenue dans `p` |
| `p + 1` | adresse de l'élément suivant (avance de la taille du type pointé) |

Les arguments d'une fonction sont passés **par copie** : pour qu'une fonction modifie une variable de l'appelant, il faut lui transmettre son **adresse**.

### Tableaux

- Cases du **même type**, **contiguës** en mémoire.
- L'indice **commence à 0**.
- Sortir des limites provoque un comportement indéfini.
- Passé à une fonction, un tableau « se dégrade » en pointeur vers son premier élément : sa taille doit être transmise séparément.

### Chaînes de caractères

- Une chaîne est un **tableau de `char`** terminé par `'\0'`.
- Longueur = nombre de caractères **avant** le `'\0'` ; taille mémoire = longueur + 1.

| Déclaration | Modifiable ? |
|---|---|
| `char s[] = "abc";` | Oui (copie sur la pile) |
| `char *s = "abc";` | Non (zone en lecture seule) |

### Portée des variables

| Type | Visible | Durée de vie |
|---|---|---|
| Locale | Dans son bloc | Jusqu'à la fin du bloc |
| Paramètre | Dans la fonction | Jusqu'à la fin de l'appel |
| Globale (interdite ici) | Dans tout le fichier | Tout le programme |

---

## Contraintes du projet

| Règle | Détail |
|---|---|
| Éditeurs autorisés | `vi`, `vim`, `emacs` |
| Environnement | Ubuntu 20.04 LTS |
| Compilateur | `gcc` avec `-Wall -Werror -Wextra -pedantic -std=gnu89` |
| Fin de fichier | Chaque fichier se termine par un retour à la ligne |
| Style | Betty (`betty-style.pl` et `betty-doc.pl`) |
| Variables globales | Interdites |
| Fonctions par fichier | 5 maximum |
| Bibliothèque standard | Interdite (`printf`, `puts`, etc.), sauf `_putchar` |
| Exception | `printf` autorisé pour la tâche 8 |
| Header | Tous les prototypes (dont `_putchar`) dans `main.h`, à pousser |
| `_putchar.c` | Fourni lors de la correction, inutile de le pousser |

Hors programme pour l'instant : pointeurs de fonctions, pointeurs de pointeurs, tableaux multidimensionnels, tableaux de structures, `malloc` et `free`.

---

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c <N>-main.c <N>-<nom>.c -o <N>-<nom>
```

Pour les tâches qui n'utilisent pas `_putchar`, on peut l'omettre de la commande.

---

## Liste des fichiers

| N° | Fichier | Prototype | Description |
|---|---|---|---|
| 0 | `0-reset_to_98.c` | `void reset_to_98(int *n);` | Met à `98` la valeur pointée par `n` |
| 1 | `1-swap.c` | `void swap_int(int *a, int *b);` | Échange les valeurs de deux entiers |
| 2 | `2-strlen.c` | `int _strlen(char *s);` | Retourne la longueur d'une chaîne |
| 3 | `3-puts.c` | `void _puts(char *str);` | Affiche une chaîne suivie d'un retour à la ligne |
| 4 | `4-print_rev.c` | `void print_rev(char *s);` | Affiche une chaîne à l'envers, suivie d'un retour à la ligne |
| 5 | `5-rev_string.c` | `void rev_string(char *s);` | Inverse une chaîne sur place |
| 6 | `6-puts2.c` | `void puts2(char *str);` | Affiche un caractère sur deux, en commençant par le premier |
| 7 | `7-puts_half.c` | `void puts_half(char *str);` | Affiche la seconde moitié d'une chaîne |
| 8 | `8-print_array.c` | `void print_array(int *a, int n);` | Affiche `n` éléments d'un tableau d'entiers, séparés par `, ` |
| 9 | `9-strcpy.c` | `char *_strcpy(char *dest, char *src);` | Copie une chaîne (avec le `\0`) dans `dest` et retourne `dest` |
| - | `main.h` | - | Prototypes de toutes les fonctions et de `_putchar` |

### Détails de comportement

| Tâche | Comportement attendu |
|---|---|
| 3 | Utilise `_putchar` ; termine par `\n` |
| 6 | `"0123456789"` donne `02468` |
| 7 | `"0123456789"` donne `56789` ; si la longueur est impaire, on affiche les `n` derniers caractères avec `n = (longueur + 1) / 2` |
| 8 | Format : `98, 402, -198, 298, -1024` puis `\n` |
| 9 | Retourne le pointeur `dest` |

---

## Exemple de test

Chaque tâche est testée avec un fichier `main.c` (non poussé sur le dépôt). Exemple pour la tâche 2 :

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
$ ./2-strlen
16
```

---

## Ressources

- C - Arrays
- C - Pointers
- C - Strings
- Memory Layout
- `man strlen`, `man puts`, `man strcpy`

---

## Auteur

Projet réalisé dans le cadre de la formation Holberton School.











Task ?


Projet C du dossier `pointers_arrays_strings` (repo `holbertonschool-low_level_programming`).

## Description

La fonction `rev_string` inverse une chaîne de caractères **sur place** :
elle modifie directement le tableau reçu, sans rien afficher et sans rien renvoyer.

## Prototype

    void rev_string(char *s);

- `s` : pointeur vers la chaîne à inverser (terminée par `\0`).

## Fonctionnement

1. Une boucle `while` parcourt la chaîne pour trouver l'indice du dernier caractère.
2. Deux indices, `debut` (au début) et `fin` (à la fin), se rapprochent l'un de l'autre.
3. À chaque tour, `s[debut]` et `s[fin]` sont échangés grâce à une variable temporaire.
4. La boucle s'arrête quand `debut >= fin`.

Comme la fonction reçoit un pointeur, la modification est visible dans la fonction appelante.

## Exemple

    My School
    loohcS yM

## Compilation

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c rev_string.c -o rev_string

## Fichiers

- `main.h` : prototypes des fonctions
- `rev_string.c` : la fonction
- `main.c` : programme de test

## Ce que j'ai appris

- Un pointeur permet de modifier le tableau d'origine.
- Les indices commencent à 0 : le dernier caractère est à `longueur - 1`.
- Pour échanger deux valeurs, il faut une variable temporaire.