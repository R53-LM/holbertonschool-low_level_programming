#include "main.h"
#include <stdio.h>

/**
* swap_int - switch the value with pointers
* @a: value switch print with b
* @b: value switch print with a
*
*/
void swap_int(int *a, int *b)
{

int mouv = *a;

*a = *b;
*b = mouv;

}
