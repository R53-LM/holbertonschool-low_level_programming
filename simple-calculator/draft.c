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


	printf("Choice: ");
	scanf("%d", &navi);

	/**condition du menu */
	if (navi > 4)
	{
		printf("Invalid choice\n");
	}

	if (navi == 0)
	{
		printf("Bye!\n");

	}
return (0);
}

