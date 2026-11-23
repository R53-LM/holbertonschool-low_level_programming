# Memory maps

## 1. stack_example
(étapes numérotées avec pile / tas / alias / durées de vie)
	Pas d'allocation mémoire
	main n'a pas de local et walk_stack avec depth (0 à 3).
	Chacun à ses propres 'depth', 'max_depth' et 'marker'.
	dump_frame a un cadre temporaire et il est créer a chaque appel 'enter' ou 'exit', puis détruit.
	On peut repérer 6 cadres ('main' + 4 'walk_stack' + 'dump_frame').
	Alias: 'p_local' et '&local_int' ont la même valeur, dans le même cadre. 'local_buf' (16 octets) est entièrement dans le cadre de 'dump_frame'.
	Le paramètre label est une copie de pointeur vers "enter" et "exit".

## 2. heap_example
...

## 3. aliasing_example
	A la compilation, nous retrouvons un used-after-free, car il libère 'a' avant l'utilisation de 'b', il aurait du faire ça avant le 'return 0;'. Donc, problème de compilateur.
	Dans la Pile de make_numbers, (n, i, arr) 'arr' est entré dans la fonction et return
	Dans la Pile de main, (a, b, n,). débute dans main et fini dans main.
	Pas de mémorie leak car le bloc a bien été libéré, même si on l'utilise ensuite.
## 4. crash_example
...

## Cas où l'IA s'est trompée

il a écrit qu'il n'y avait aucun malloc et rien sur le heap dans stack_example et crash_example