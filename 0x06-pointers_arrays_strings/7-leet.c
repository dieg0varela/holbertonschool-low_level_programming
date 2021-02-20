#include "holberton.h"
/**
* leet - Entry point
* @s: String
*
* Description: Convert a string into 1337
* Return: String
*/
char *leet(char *s)
{
	char let[] = "aAeEoOtTlL", num[] = "43071";
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (s[i] == let[j])
				s[i] = num[j / 2];
		}
		i++;
	}
	return (s);
}
