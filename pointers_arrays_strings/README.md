C - Pointers, arrays and strings

Resources
Read or watch:

    C - Arrays
    C - Pointers
    C - Strings
    Memory Layout

Learning Objectives
    At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
    What are pointers and how to use them
    What are arrays and how to use them
    What are the differences between pointers and arrays
    How to use strings and how to manipulate them
    Scope of variables


Requirements
General
    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
    You are allowed to use _putchar
    You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
    Don't forget to push your header file


    # rev_string

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