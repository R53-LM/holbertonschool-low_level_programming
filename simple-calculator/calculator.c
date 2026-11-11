#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* calculator -
*
*
*
*/
void main(void)
{

int navi;


/*menu - dérouler*/
	printf("Welcome in the calculator\n");

	printf("1) Add\n");
	scanf("%d", &navi);

	printf("2) Subtract\n");
	scanf("%d", &navi);

	printf("3) Multiply\n");
	scanf("%d", &navi);

	printf("4) Divide\n");
	scanf("%d", &navi);

	printf("0) Quit\n");
	scanf("%d", &navi);

	printf("Choice: %d\n", navi);

	if (navi == 0)
	{
		printf("Bye!\n");
	}
}

