#include "holberton.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
* str_concat - Entry point
* @s1: String
* @s2: String
*
* Description: Alocate memory adn concatenate 2 strings
* Return: Pointer to resault
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, totlen = 0, i = 0, j = 0;
	char *dest;

	if (s1 != NULL)
		len1 = _strlen(s1);
	if (s2 != NULL)
		len2 = _strlen(s2);

	totlen = len1 + len2 + 1;
	dest = malloc(totlen);
	if (dest == NULL)
		return (NULL);

	for (i = 0 ; i < len1 ; i++)
		dest[i] = s1[i];
	for (; i < totlen ; i++, j++)
	{
		dest[i] = s2[j];
	}
	dest[i] = '\0';
	return (dest);
}
