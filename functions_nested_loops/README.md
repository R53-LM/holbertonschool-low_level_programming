# C - Fonctions, boucles imbriquées
 
Ce projet fait partie du dépôt `holbertonschool-low_level_programming`. 
Il introduit les fonctions, les boucles imbriquées, les prototypes de fonctions, la portée des variables et les fichiers d'en-tête en C.
 
## Objectifs d'apprentissage
 
À la fin de ce projet, tu dois être capable d'expliquer, sans l'aide de Google :
 
- Ce que sont les boucles imbriquées et comment les utiliser
- Ce qu'est une fonction et comment l'utiliser
- La différence entre la déclaration et la définition d'une fonction
- Ce qu'est un prototype
- La portée des variables
- Ce que font les options `gcc` `-Wall -Werror -pedantic -Wextra -std=gnu89`
- Ce que sont les fichiers d'en-tête et comment les utiliser avec `#include`
## Contraintes
 
- Éditeurs autorisés : `vi`, `vim`, `emacs`
- Les fichiers sont compilés sur Ubuntu 20.04 LTS avec `gcc` et les options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers se terminent par une nouvelle ligne
- Le code respecte le style [Betty](https://github.com/hs-hq/Betty) (vérifié avec `betty-style.pl` et `betty-doc.pl`)
- Aucune variable globale
- Pas plus de 5 fonctions par fichier
- La bibliothèque standard est interdite (`printf`, `puts`, etc.), sauf si une tâche l'autorise
- Seule `_putchar` peut être utilisée pour afficher des caractères
- Les prototypes de toutes les fonctions et de `_putchar` sont inclus dans le fichier d'en-tête `main.h`
## Compilation
 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c <fichier_main>.c <fichier_fonction>.c -o <sortie>
```
 
Exemple :
 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
./1-alphabet
```
 
## Fichiers
 
| Fichier                  | Prototype                        | Description                                                                   |
|--------------------------|----------------------------------|-------------------------------------------------------------------------------|
| `main.h`                 |                                  | Fichier d'en-tête contenant tous les prototypes (dont `_putchar`)             |
| `0-putchar.c`            | `int main(void)`                 | Affiche `_putchar` suivi d'un retour à la ligne                               |
| `1-alphabet.c`           | `void print_alphabet(void);`     | Affiche l'alphabet en minuscules, suivi d'un retour à la ligne                |
| `2-print_alphabet_x10.c` | `void print_alphabet_x10(void);` | Affiche 10 fois l'alphabet en minuscules, chacun suivi d'un retour à la ligne |
| `3-islower.c`            | `int _islower(int c);`           | Vérifie si le caractère est une minuscule                                     |
| `4-isalpha.c`            | `int _isalpha(int c);`           | Vérifie si le caractère est une lettre                                        |
| `5-sign.c`               | `int print_sign(int n);`         | Affiche le signe d'un nombre                                                  |
| `6-abs.c`                | `int _abs(int);`                 | Calcule la valeur absolue d'un entier                                         |
| `7-print_last_digit.c`   | `int print_last_digit(int);`     | Affiche le dernier chiffre d'un nombre et le retourne                         |
| `8-24_hours.c`           | `void jack_bauer(void);`         | Affiche chaque minute de la journée, de 00:00 à 23:59                         |
| `9-times_table.c`        | `void times_table(void);`        | Affiche la table de 9, en commençant par 0                                    |
| `10-add.c`               | `int add(int, int);`             | Additionne deux entiers et retourne le résultat                               |
| `11-print_to_98.c`       | `void print_to_98(int n);`       | Affiche tous les entiers de `n` à 98, séparés par `, `                        |
 
## Tâches
 
| N° | Titre                   | Description                                                                                                                                                           |
|----|-------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0  | _putchar                | programme qui affiche `_putchar`, suivi d'un retour à la ligne. Il retourne `0`.                                                                                      |
| 1  | Le jeu de l'alphabet    | affiche l'alphabet en minuscules. `_putchar` ne peut être utilisée que deux fois dans le code.                                                                        |
| 2  | 10 x alphabet           | affiche 10 fois l'alphabet en minuscules. `_putchar` ne peut être utilisée que deux fois dans le code.                                                                |
| 3  | islower                 | retourne `1` si `c` est une minuscule, `0` sinon.                                                                                                                     |
| 4  | isalpha                 | retourne `1` si `c` est une lettre (minuscule ou majuscule), `0` sinon.                                                                                               |
| 5  | Signe                   | retourne `1` et affiche `+` si `n > 0`, retourne `0` et affiche `0` si `n == 0`, retourne `-1` et affiche `-` si `n < 0`.                                             |
| 6  | Valeur absolue          | calcule la valeur absolue d'un entier.                                                                                                                                |
| 7  | Dernier chiffre         | affiche le dernier chiffre d'un nombre et retourne sa valeur.                                                                                                         |
| 8  | Jack Bauer              | affiche chaque minute de la journée de `00:00` à `23:59`.                                                                                                             |
| 9  | Table de multiplication | affiche la table de 9 avec le format exact donné dans le sujet.                                                                                                       |
| 10 | a + b                   | additionne deux entiers et retourne le résultat.                                                                                                                      |
| 11 | 98 Battery Street       | affiche tous les entiers de `n` à `98`, séparés par une virgule et un espace, suivis d'un retour à la ligne. La bibliothèque standard est autorisée pour cette tâche. |
 
## Ressources
 
- Nested while loops
- C - Functions
- Learning to Program in C (Part 06)
- What is a function prototype
- What is the purpose of a function prototype?
- C - Header Files
## Dépôt
 
- Dépôt GitHub : `holbertonschool-low_level_programming`
- Dossier : `functions_nested_loops`