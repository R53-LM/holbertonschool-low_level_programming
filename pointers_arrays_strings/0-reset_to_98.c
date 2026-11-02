#include "main.h"
#include <stdio.h>

/**
* reset_to_98 - print and change the value with pointers
* @n: integer to update through a pointer without changing its initial value
*
*
*/
void reset_to_98(int *n)
{

int *chg = n;

*chg = 98;

}
