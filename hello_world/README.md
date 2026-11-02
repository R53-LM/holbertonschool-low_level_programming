# C - Hello, World
 
Ce projet fait partie du dépôt `holbertonschool-low_level_programming`. C'est une première prise en main du langage C : préprocesseur, compilation, assembleur, affichage de texte avec `puts` et `printf`, et taille des types avec `sizeof`.
 
## Objectifs d'apprentissage
 
À la fin de ce projet, tu dois être capable d'expliquer, sans l'aide de Google :
 
- Pourquoi la programmation en C est géniale
- Qui a inventé le C
- Qui sont Dennis Ritchie, Brian Kernighan et Linus Torvalds
- Ce qui se passe quand on tape `gcc main.c`
- Ce qu'est un point d'entrée
- Ce qu'est `main`
- Comment afficher du texte avec `printf`, `puts` et `putchar`
- Comment obtenir la taille d'un type avec l'opérateur unaire `sizeof`
- Comment compiler avec `gcc`
- Quel est le nom par défaut du programme compilé avec `gcc`
- Quel est le style de code officiel en C et comment vérifier son code avec `betty-style`
- Comment trouver le bon en-tête à inclure pour une fonction de la bibliothèque standard
- Comment la fonction `main` influence la valeur de retour du programme
## Contraintes
 
### Programmes C
 
- Éditeurs autorisés : `vi`, `vim`, `emacs`
- Les fichiers sont compilés sur Ubuntu 20.04 LTS avec `gcc` et les options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers se terminent par une nouvelle ligne
- Un fichier `README.md` à la racine du dépôt, avec une description du dépôt
- Un fichier `README.md` à la racine du dossier du projet, avec une description du projet
- Aucune erreur et aucun warning à la compilation
- L'utilisation de `system` est interdite
- Le code respecte le style [Betty](https://github.com/hs-hq/Betty) (vérifié avec `betty-style.pl` et `betty-doc.pl`)
### Scripts shell
 
- Éditeurs autorisés : `vi`, `vim`, `emacs`
- Les scripts sont testés sur Ubuntu 20.04 LTS
- Chaque script fait exactement deux lignes (`wc -l fichier` doit afficher 2)
- Tous les fichiers se terminent par une nouvelle ligne
- La première ligne de chaque fichier est exactement `#!/bin/bash`
## Linter Betty
 
Pour lancer le linter avec la commande `betty <fichier>` :
 
1. Cloner le dépôt [Betty](https://github.com/hs-hq/Betty) sur ta machine
2. Aller dans le dossier Betty avec `cd`
3. Installer le linter avec `sudo ./install.sh`
4. Créer un fichier `betty` avec `emacs` ou `vi` et y copier le script fourni dans le sujet
5. Rendre le fichier exécutable pour tous avec `chmod a+x betty`
6. Le déplacer dans `/bin/` avec `sudo mv betty /bin/`
Tu peux ensuite taper `betty <fichier>` pour lancer le linter.
 
## Fichiers
 
| Fichier          | Type         | Description                                                                                   |
|------------------|--------------|-----------------------------------------------------------------------------------------------|
| `0-preprocessor` | Script shell | Passe le fichier `$CFILE` dans le préprocesseur et enregistre le résultat dans le fichier `c` |
| `1-compiler`     | Script shell | Compile `$CFILE` sans faire l'édition de liens (`main.c` donne `main.o`)                      |
| `2-assembler`    | Script shell | Génère le code assembleur de `$CFILE` (`main.c` donne `main.s`)                               |
| `3-name`         | Script shell | Compile `$CFILE` et crée un exécutable nommé `cisfun`                                         |
| `4-puts.c`       | Programme C  | Affiche une phrase avec `puts`, suivie d'un retour à la ligne                                 |
| `5-printf.c`     | Programme C  | Affiche une phrase avec `printf`, suivie d'un retour à la ligne                               |
| `6-size.c`       | Programme C  | Affiche la taille de plusieurs types sur la machine (avec `sizeof`)                           |
 
## Tâches
 
| N° | Titre                                                      | Description                                                                                                             |
|----|------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0  | Preprocessor                                               | Script qui exécute le préprocesseur sur le fichier C contenu dans `$CFILE` et enregistre le résultat dans le fichier `c`.                                                                  |
| 1  | Compiler                                                   | Script qui compile `$CFILE` sans faire l'édition de liens. Le fichier de sortie porte le même nom avec l'extension `.o`.                                                                   |
| 2  | Assembler                                                  | Script qui génère le code assembleur de `$CFILE`. Le fichier de sortie porte le même nom avec l'extension `.s`.                                                                            |
| 3  | Name                                                       | Script qui compile `$CFILE` et crée un exécutable nommé `cisfun`.                                                                                                                          |
| 4  | Hello, puts                                                | Programme C qui affiche exactement `"Programming is like building a multilingual puzzle`, suivi d'un retour à la ligne. Utilise `puts`, pas `printf`. Retourne `0`.                        |
| 5  | Hello, printf                                              | Programme C qui affiche exactement `with proper grammar, but the outcome is a piece of art,`, suivi d'un retour à la ligne. Utilise `printf`, pas `puts`. Retourne `0`.                    |
| 6  | Size is not grandeur, and territory does not make a nation | Programme C qui affiche la taille de plusieurs types sur la machine où il est compilé et exécuté, avec exactement la même 
                                                                    sortie que l'exemple. Les warnings sont autorisés. Retourne `0`. |
 
## Utilisation
 
Scripts shell (exemple avec `0-preprocessor`) :
 
```bash
export CFILE=main.c
./0-preprocessor
```
 
Programmes C :
 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o 4-puts
./4-puts
```
 
## Ressources
 
| Ressource                                       | Type                                   |
|-------------------------------------------------|----------------------------------------|
| Everything you need to know to start with C.pdf | À lire en entier d'abord               |
| Dennis Ritchie                                  | À lire ou regarder                     |
| "C" Programming Language: Brian Kernighan       | À regarder                             |
| Why C Programming Is Awesome                    | À lire ou regarder                     |
| Learning to program in C part 1                 | À regarder                             |
| Learning to program in C part 2                 | À regarder                             |
| Understanding C program Compilation Process     | À lire ou regarder                     |
| Betty Coding Style                              | À lire                                 |
| Linus Torvalds on C vs. C++                     | À regarder après les autres ressources |
 
Pages de manuel à consulter : `gcc`, `printf (3)`, `puts`, `putchar`.
 
## Dépôt
 
- Dépôt GitHub : `holbertonschool-low_level_programming`
- Dossier : `hello_world`
 