#include "main.h"

/**
* _isdigit - check c if is digit
*@c: character we want to check
*
* Return: 1 if is digit, 0 for otherwise
*/
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
