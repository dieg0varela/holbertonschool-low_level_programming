#include "holberton.h"
/**
* _strcmp - Entry point
* @s1: String
* @s2: String
*
* Description: Compare 2 strings
* Return: 0 if strings are equals, otherwise the diff of letters
*/
int _strcmp(char *s1, char *s2)
{
	int flag = 0, i = 0;

	while (!flag)
	{
		if (s1[i] - s2[i] != 0)
		{
			flag = 1;
			return (s1[i] - s2[i]);
		}
		else
			i++;
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			flag = 1;
	}
	return (0);
}
