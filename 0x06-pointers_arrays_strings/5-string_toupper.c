#include "holberton.h"
/**
* string_toupper - Entry point
* @s: String
*
* Description: Convert all lowercase letter in uppercase
* Return: String
*/
char *string_toupper(char *s)
{
	char *ret = s;

	while (*s)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		s++;
	}
	return (ret);
}
