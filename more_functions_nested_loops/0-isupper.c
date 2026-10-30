#include "main.h"

/**
* isupper - check in main.h
*
* Return: 1 if the character is uppercase, 0 for otherwise
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
