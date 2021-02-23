#include "holberton.h"
/**
* _strpbrk - Entry point
* @s: String
* @accept: String
*
* Description: Search a string of any set of bytes
* Return:csoo
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, bool = 0;
	char *r = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r = &s[i];
				bool = 1;
				break;
			}
		}
		if (bool)
			break;
	}
	return (r);
}






