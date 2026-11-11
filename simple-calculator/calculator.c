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
int main(void)
{

int navi;


/*menu - dérouler*/
	printf("Simple Calculator\n");

	printf("1) Add\n");

	printf("2) Subtract\n");

	printf("3) Multiply\n");

	printf("4) Divide\n");

	printf("0) Quit\n");

	scanf("%d", &navi);

	printf("Choice: %d\n", navi);


	if (navi == 0)
	{
		printf("Bye!\n");
	}
return (0);
}

