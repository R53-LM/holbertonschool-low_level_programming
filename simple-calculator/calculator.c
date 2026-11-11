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

	do 
    {
		/* menu - dérouler */
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");

		printf("Choice: ");
		scanf("%d", &navi);

		/* choix hors du menu. */
		if (navi < 0 || navi > 4)
		{
			printf("Invalid choice\n");
			printf("\n");
		}
        switch (navi) {
            case 1: /*addition*/
            	int A;

	            int B;

                int Result;
	            printf("A: ");
	            scanf("%d", &A);
                printf("\n");
	            printf("B: ");
	            scanf("%d", &B);
                printf("\n");

                Result = A + B;
                printf("Result: %d\n", Result);
                break;

            case 2:/*soustraction*/

	            printf("A: ");
	            scanf("%d", &A);
                printf("\n");
	            printf("B: ");
	            scanf("%d", &B);
                printf("\n");

                Result = A - B;
                printf("Result: %d\n", Result);
                break;

            case 3:/*soustraction*/

	            printf("A: ");
	            scanf("%d", &A);
                printf("\n");
	            printf("B: ");
	            scanf("%d", &B);
                printf("\n");

                Result = A - B;
                printf("Result: %d\n", Result);
                break;

            case 4:/*soustraction*/

	            printf("A: ");
	            scanf("%d", &A);
                printf("\n");
	            printf("B: ");
	            scanf("%d", &B);
                printf("\n");

                Result = A - B;
                printf("Result: %d\n", Result);
                break;
        }
    } while (navi != 0);

	printf("Bye!\n");
	return (0);
}
