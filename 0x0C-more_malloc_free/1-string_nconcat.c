#include "holberton.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
* string_nconcat - Entry point
* @s1: string
* @s2: string
* @n: int
*
* Description: Concatenate 2 string n bytes of second string
* Return: string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0, size = 0;

	if (s1 != NULL)
		len1 = _strlen(s1);
	if (s2 != NULL)
		len2 = _strlen(s2);
	if (n >= len2)
		size = len1 + len2 + 1;
	else
		size = len1 + n + 1;
	res = malloc(size);
	if (res == NULL)
		return (NULL);
	for (i = 0 ; i < len1 ; i++)
		res[i] = s1[i];
	for (; i < size - 1 ; i++, j++)
		res[i] = s2[j];
	res[i] = '\0';
	return (res);
}
