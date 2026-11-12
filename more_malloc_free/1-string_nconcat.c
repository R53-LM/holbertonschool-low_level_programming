#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates s1 with the first n bytes of s2
* @s1: first string
* @s2: second string
* @n: maximum number of bytes to copy from s2
*
* Return: pointer to the concatenated string, or NULL if allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i = 0;
unsigned int j = 0;
char *v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)/*si la valeur n est plus grande que s2, alors count prend s2*/
	v = malloc(sizeof(char) * (len1 + len2 + 1));
	else
	v = malloc(sizeof(char) * (len1 + n + 1));
	if (v == NULL)
		return (NULL);
	for (; i < len1; i++)
		v[i] = s1[i];
	for (; j < len2 && j < n; j++)
		v[i + j] = s2[j];
	v[i + j] = '\0';
	return (v);
}
