# C - Variables, if, else, while
 
Ce projet fait partie du dépôt `holbertonschool-low_level_programming`. Il introduit les variables, les opérateurs, les conditions `if` / `else`, la boucle `while` et le jeu de caractères ASCII en C.
 
## Objectifs d'apprentissage
 
À la fin de ce projet, tu dois être capable d'expliquer, sans l'aide de Google :
 
- Ce que sont les opérateurs arithmétiques et comment les utiliser
- Ce que sont les opérateurs logiques (ou booléens) et comment les utiliser
- Ce que sont les opérateurs relationnels et comment les utiliser
- Quelles valeurs sont considérées comme VRAI et FAUX en C
- Comment utiliser les instructions `if` et `if ... else`
- Comment utiliser les commentaires
- Comment déclarer des variables de type `char`, `int` et `unsigned int`
- Comment affecter des valeurs à des variables
- Comment afficher la valeur de variables de type `char`, `int` et `unsigned int` avec `printf`
- Comment utiliser la boucle `while`
- Comment utiliser des variables avec la boucle `while`
- Ce qu'est le jeu de caractères `ASCII`
- À quoi servent les options `gcc` `-m32` et `-m64`
## Contraintes
 
- Éditeurs autorisés : `vi`, `vim`, `emacs`
- Les fichiers sont compilés sur Ubuntu 20.04 LTS avec `gcc` et les options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers se terminent par une nouvelle ligne
- Un fichier `README.md` à la racine du dossier du projet
- Aucune erreur et aucun warning à la compilation
- L'utilisation de `system` est interdite
- Le code respecte le style [Betty](https://github.com/hs-hq/Betty) (vérifié avec `betty-style.pl` et `betty-doc.pl`)
- Pour les tâches 2 à 9 : seule la fonction `putchar` est autorisée (`printf`, `puts`, etc. sont interdites) et tout le code doit être dans la fonction `main`
## Compilation
 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <fichier>.c -o <sortie>
```
 
Exemple :
 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
./2-print_alphabet
```
 
## Fichiers
 
| Fichier                    | Description                                                       |
|----------------------------|-------------------------------------------------------------------|
| `0-positive_or_negative.c` | Indique si le nombre `n` est positif, nul ou négatif              |
| `1-last_digit.c`           | Affiche le dernier chiffre du nombre `n` et le compare à 5 et à 0 |
| `2-print_alphabet.c`       | Affiche l'alphabet en minuscules                                  |
| `3-print_alphabets.c`      | Affiche l'alphabet en minuscules, puis en majuscules              |
| `4-print_alphabt.c`        | Affiche l'alphabet en minuscules sans `q` ni `e`                  |
| `5-print_numbers.c`        | Affiche les chiffres de la base 10, de 0 à 9                      |
| `6-print_numberz.c`        | Affiche les chiffres de 0 à 9 sans variable de type `char`        |
| `7-print_tebahpla.c`       | Affiche l'alphabet en minuscules à l'envers                       |
| `8-print_base16.c`         | Affiche les chiffres de la base 16 en minuscules                  |
| `9-print_comb.c`           | Affiche tous les chiffres de 0 à 9 séparés par `, `               |
 
## Tâches
 
| N° | Titre                                             | Description                                                                                                  | Limite de `putchar` |
|----|---------------------------------------------------|-----------------------------------------------              -------------------------------------------------|---------------------|
| 0  | Positive anything is better than negative nothing | Compléter le code fourni pour afficher le nombre `n` suivi de `is positive`, `is zero` ou `is negative`, 
                                                            puis un retour à la ligne. Ne pas toucher au code de `rand` et `srand`.                                     | -                   |
| 1  | The last digit                                    | Compléter le code fourni pour afficher `Last digit of`, `n`, `is`, le dernier chiffre, 
                                                            puis `and is greater than 5`, `and is 0` ou `and is less than 6 and not 0`, suivi d'un retour à la ligne.   | -                   |
| 2  | Alphabet game                                     | Affiche l'alphabet en minuscules, suivi d'un retour à la ligne.                                              | 2 fois              |
| 3  | alphABET                                          | Affiche l'alphabet en minuscules, puis en majuscules, suivi d'un retour à la ligne.                          | 3 fois              |
| 4  | Alphabet soup                                     | Affiche l'alphabet en minuscules sauf `q` et `e`, suivi d'un retour à la ligne.                              | 2 fois              |
| 5  | Numbers                                           | Affiche tous les chiffres de la base 10 en partant de `0`, suivis d'un retour à la ligne.                    | -                   |
| 6  | Numberz                                           | Même affichage que la tâche 5, sans aucune variable de type `char`.                                          | 2 fois              |
| 7  | Smile in the mirror                               | Affiche l'alphabet en minuscules à l'envers, suivi d'un retour à la ligne.                                   | 2 fois              |
| 8  | Hexadecimal                                       | Affiche tous les chiffres de la base 16 en minuscules, suivis d'un retour à la ligne.                        | 3 fois              |
| 9  | Patience, persistence and perspiration            | Affiche tous les chiffres de 0 à 9, séparés par `, ` et en ordre croissant, sans variable de type `char`.    | 4 fois maximum      |
 
## Ressources
 
| Ressource                                       | Remarque                 |
|-------------------------------------------------|--------------------------|
| Everything you need to know to start with C.pdf | À lire en entier d'abord |
| Keywords and identifiers                        |                          |
| integers                                        |                          |
| Arithmetic Operators in C                       |                          |
| If statements in C                              |                          |
| if…else statement                               |                          |
| Relational operators                            |                          |
| Logical operators                               |                          |
| while loop in C                                 |                          |
| While loop                                      |                          |
 
Page de manuel à consulter : `ascii`. Il n'est pas nécessaire de connaître `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, les boucles `for` et `do...while`, ni les fonctions.
 
## Dépôt
 
- Dépôt GitHub : `holbertonschool-low_level_programming`
- Dossier : `variables_if_else_while`
 