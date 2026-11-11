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

int A;
int B;
int Result;

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

	            printf("A: ");
	            scanf("%d", &A);
	            printf("B: ");
	            scanf("%d", &B);
                printf("\n");

                Result = A + B;
                printf("Result: %d\n", Result);
                break;

            case 2:/*soustraction*/

	            printf("A: ");
	            scanf("%d", &A);
	            printf("B: ");
	            scanf("%d", &B);
                printf("\n");

                Result = A - B;
                printf("Result: %d\n", Result);
                break;

            case 3:/*multiplicationn*/

	            printf("A: ");
	            scanf("%d", &A);
	            printf("B: ");
	            scanf("%d", &B);
                printf("\n");

                Result = A * B;
                printf("Result: %d\n", Result);
                break;

            case 4:/*division*/

	            printf("A: ");
	            scanf("%d", &A);
	            printf("B: ");
	            scanf("%d", &B);
                printf("\n");


                if (B == 0)
                {
                    printf("Error: division by zero\n");
                }
                else
                {
                Result = A / B;
                printf("Result: %d\n", Result);
                }
                break;
        }
    /*sortir du menu + fin de l'execution.*/
    } while (navi != 0);

	printf("Bye!\n");
	return (0);
}
