# C - Plus de fonctions, plus de boucles imbriquées
 
Ce projet fait partie du dépôt `holbertonschool-low_level_programming`. Il approfondit les fonctions, les boucles imbriquées, les prototypes, la portée des variables et les fichiers d'en-tête en C.
 
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
- Un fichier `README.md` à la racine du dossier du projet est obligatoire
- Le code respecte le style [Betty](https://github.com/hs-hq/Betty) (vérifié avec `betty-style.pl` et `betty-doc.pl`)
- Aucune variable globale
- Pas plus de 5 fonctions par fichier
- La bibliothèque standard est interdite (`printf`, `puts`, etc.), sauf pour la tâche 9 (Fizz-Buzz)
- La fonction `_putchar` est autorisée
- Inutile de pousser `_putchar.c` : le fichier des correcteurs est utilisé à la place
- Les fichiers `main.c` des exemples servent à tester tes fonctions, mais ne sont pas pris en compte s'ils sont poussés. Les correcteurs utilisent leurs propres `main.c`, qui peuvent différer des exemples
- Les prototypes de toutes les fonctions et celui de `_putchar` sont dans le fichier d'en-tête `main.h`
- Ne pas oublier de pousser le fichier d'en-tête
## Pour info
 
Tu n'as pas encore besoin de comprendre le passage par référence (adresse), la pile, les variables statiques, la récursivité ni les tableaux.
 
## Compilation
 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c <fichier_main>.c <fichier_fonction>.c -o <sortie>
```
 
Exemple :
 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
./3-print_numbers
```
 
## Fichiers
 
| Fichier                  | Prototype                        | Description                                                                       |
|--------------------------|----------------------------------|-----------------------------------------------------------------------------------|
| `main.h`                 |                                  | Fichier d'en-tête contenant tous les prototypes (dont `_putchar`)                 |
| `0-isupper.c`            | `int _isupper(int c);`           | Vérifie si le caractère est une majuscule                                         |
| `1-isdigit.c`            | `int _isdigit(int c);`           | Vérifie si le caractère est un chiffre (de `0` à `9`)                             |
| `2-mul.c`                | `int mul(int a, int b);`         | Multiplie deux entiers et retourne le résultat                                    |
| `3-print_numbers.c`      | `void print_numbers(void);`      | Affiche les chiffres de 0 à 9, suivis d'un retour à la ligne                      |
| `4-print_most_numbers.c` | `void print_most_numbers(void);` | Affiche les chiffres de 0 à 9 sauf 2 et 4, suivis d'un retour à la ligne          |
| `5-more_numbers.c`       | `void more_numbers(void);`       | Affiche 10 fois les nombres de 0 à 14, chaque ligne suivie d'un retour à la ligne |
| `6-print_line.c`         | `void print_line(int n);`        | Trace une ligne droite de `_` dans le terminal                                    |
| `7-print_diagonal.c`     | `void print_diagonal(int n);`    | Trace une diagonale de `\` dans le terminal                                       |
| `8-print_square.c`       | `void print_square(int size);`   | Affiche un carré de `#`, suivi d'un retour à la ligne                             |
| `9-fizz_buzz.c`          | `int main(void)`                 | Affiche les nombres de 1 à 100 avec Fizz, Buzz et FizzBuzz                        |
| `10-print_triangle.c`    | `void print_triangle(int size);` | Affiche un triangle de `#`, suivi d'un retour à la ligne                          |
 
## Tâches
 
| N° | Titre                                                       | Description                                                                                                          |
|----|-------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0  | isupper                                                     | Retourne `1` si `c` est une majuscule, `0` sinon.                                                                                                                                                                                    |
| 1  | isdigit                                                     | Retourne `1` si `c` est un chiffre (de `0` à `9`), `0` sinon.                                                        |
| 2  | Collaboration is multiplication                             | Multiplie deux entiers et retourne le résultat.                                                                      |
| 3  | The numbers speak for themselves                            | Affiche les chiffres de `0` à `9`, suivis d'un retour à la ligne. `_putchar` ne peut être utilisée que deux fois dans 
                                                                    le code.                                                                                                              |
| 4  | I believe in numbers and signs                              | Affiche les chiffres de `0` à `9` sans afficher `2` ni `4`, suivis d'un retour à la ligne. `_putchar` ne peut être 
                                                                    utilisée que deux fois dans le code.                                                                                  |
| 5  | Numbers constitute the only universal language              | Affiche 10 fois les nombres de `0` à `14`, chaque ligne suivie d'un retour à la ligne. `_putchar` ne peut être 
                                                                    utilisée que trois fois dans le code.                                                                                 |
| 6  | The shortest distance between two points is a straight line | Trace une ligne droite : affiche `n` fois le caractère `_`, puis `\n`. Si `n` vaut `0` ou moins, affiche 
                                                                    seulement `\n`. Seule `_putchar` est autorisée pour afficher.                                                         |
| 7  | I feel like I am diagonally parked in a parallel universe   | Trace une diagonale : affiche `n` fois le caractère `\`, chacun décalé d'un espace de plus que le précédent, 
                                                                    puis `\n`. Si `n` vaut `0` ou moins, affiche seulement `\n`. Seule `_putchar` est autorisée pour afficher.            |
| 8  | You are so much sunshine in every square inch               | Affiche un carré de `size` x `size` avec le caractère `#`, suivi d'un retour à la ligne. Si `size` vaut `0` ou moins, 
                                                                    affiche seulement un retour à la ligne. Seule `_putchar` est autorisée pour afficher.                                 |
| 9  | Fizz-Buzz                                                   | Programme qui affiche les nombres de `1` à `100`, suivis d'un retour à la ligne. Les multiples de 3 sont remplacés par 
                                                                    `Fizz`, les multiples de 5 par `Buzz`, et les multiples de 3 et de 5 par `FizzBuzz`. 
                                                                    Chaque nombre ou mot est séparé par un espace. La bibliothèque standard est autorisée.                                |
| 10 | Triangles                                                   | Affiche un triangle de hauteur `size` avec le caractère `#`, aligné à droite, suivi d'un retour à la ligne. 
                                                                    Si `size` vaut `0` ou moins, affiche seulement un retour à la ligne. Seule `_putchar` est autorisée pour afficher.    |
 
## Ressources
 
| Ressource                                    | Remarque                                            |
|----------------------------------------------|-----------------------------------------------------|
| Nested while loops                           |                                                     |
| C - Functions                                |                                                     |
| Learning to Program in C (Part 06)           | S'arrêter à 14:00                                   |
| What is the purpose of a function prototype? |                                                     |
| C - Header Files                             | S'arrêter avant le paragraphe « Once-Only Headers » |
 
## Dépôt
 
- Dépôt GitHub : `holbertonschool-low_level_programming`
- Dossier : `more_functions_nested_loops`
 