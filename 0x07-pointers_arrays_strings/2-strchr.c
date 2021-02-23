#include "holberton.h"
/**
* _strchr - Entry point
* @s: String
* @c: Character
*
* Description: Locale a leter in a string
* Return: Pointer to the fisrt char located
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (s[0] == c)
		{
			return (s);
		}
		s++;
	}

	if (s[0] == c)
		return (s);

	return ('\0');
}
