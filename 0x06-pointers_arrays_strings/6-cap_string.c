#include "holberton.h"
/**
* cap_string - Entry point
* @s: String
*
* Description: Capitalizes all words
* Return: String
*/
char *cap_string(char *s)
{
	int prev = 0;
	char *ret = s;

	while (*s)
	{
		if (prev == 32 || prev == 9 || prev == 10 || prev == ',' || prev == ';')
		{
			if (s[0] >= 97 && s[0] <= 122)
				s[0] -= 32;
		}
		if (prev == '.' || prev == '!' || prev == '?' || prev == '"' || prev == '(')
		{
			if (s[0] >= 97 && s[0] <= 122)
				s[0] -= 32;
		}
		if (prev == ')' || prev == '{' || prev == '}')
		{
			if (s[0] >= 97 && s[0] <= 122)
				s[0] -= 32;
		}
		prev = s[0];
		s++;
	}
	return (ret);
}
