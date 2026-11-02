3. Written Report

# Measurement Methodology
En commençant le projet, nous nous basons sur plusieur benchmark. Celà permet de mesurer par exemple; le temps, les données,... d'exécution d'une boucle.

Avec la fonctions clock(), nous pouvons calculer le temps. Placer en début et fin de programmes, le résultat s'affiche en ticks, qu'on redéfini en secondes avec un calcule (CLOCKS_PER_SEC).
Egalemment, ARRAY_SIZE permet de calculer le nombre d'éléments d'un tableau

Puis, il à suffit de compiler le programme avec:
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long nom_du_fichier.c -o nom_du_fichier
Et d'exécuter le programme 3 fois pour faire des comparaisons.


# Observed Performance Differences
Suite à l'exécution des programmes des différentes task, nous retrouvons ça !:
Task 0________________________________________________________________________________________________
Iterations: 100000000            | Iterations: 100000000            | Iterations: 100000000
Execution time: 0.073189 seconds | Execution time: 0.071345 seconds | Execution time: 0.071180 seconds

On peut voir sur cette task que nous retrouvons la même iterations mais pas exactement le même temps d'exécution.

Task 1________________________________________________________________________________________________
Naive algorithm result: 625025000        | Single-pass algorithm result: 25000
Naive algorithm time: 1.038893 seconds   | Single-pass algorithm time: 0.000040 seconds

Naive algorithm est une solution plus directe, sans chercher à être efficace. Tandis que, single-pass parcourt le tableau une seule fois, du début à la fin, et chaque élément n’est regardé qu’une fois. Donc, plus rapide avec moins de ticks. (lier a ARRAY_SIZE)

Task 2________________________________________________________________________________________________
TOTAL seconds: 0.000471                  | PROCESS seconds: 0.000185
BUILD_DATA seconds: 0.000206             | REDUCE seconds: 0.000080

Sur cette task, nous obtenons que des évaluateurs de temps pour chaque programmes. 

On peut observer une fine différence entre nos programmes. Selon la taille, la tâche exécutée et la génération de data, le programme peut prendre plus de temps à s'exécuter.


# Relation Between Runtime and Energy Consumption

Nous avons seulement mesuré le temps d'exécution de nos programmes.  Aucune de nos sorties ne contient de valeur d'énergie.
Pour réduire le temps d'exécution, on peut optimiser le programme, par exemple en choisissant un algorithme plus efficace, comme le single-pass.

# Limitations of the Experiment
Si nous relançons des programmes, nous aurions des résultats similaire, si aucun autre programme ou logiciel tourne en même temps. Nous sommes limiter à la capaciter de notre machine et nous aurions des résultats de vitesse d'exécutions différent avec d'autres machine...
Ces temps très court sont lier aussi à notre environnement d'exécution en locale

# Practical Engineering Takeaway

Concrètement, nous retenons qu'il faut choisir l'algorithme dont le nombre d'opérations croît le moins avec la taille des données, répéter chaque mesure plusieurs fois (au moins 3) et comparer la moyenne et l'écart.