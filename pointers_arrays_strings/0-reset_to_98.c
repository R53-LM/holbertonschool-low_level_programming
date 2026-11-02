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

int n = 402;

int *chg = &n;

printf("%d\n", *chg);

*chg = 98;

printf("%d\n", *chg);

return (0);
}
