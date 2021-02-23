#include "holberton.h"
/**
* _strspn - Entry point
* @s: String
* @accept: String
*
* Description: Gets the length of a prefix
* Return: number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, flag = 1, size = 0;
	unsigned int ret = 0;
	char *ac = accept;

	while (*accept)
	{
		size++;
		accept++;
	}

	for (i = 0 ; flag ; i++)
	{
		for (j = 0 ; ac[j] != '\0' ; j++)
		{
			if (s[i] == ac[j])
			{
				ret++;
				break;
			}
			if (j == size - 1)
				flag = 0;
		}
	}
	return (ret);
}
