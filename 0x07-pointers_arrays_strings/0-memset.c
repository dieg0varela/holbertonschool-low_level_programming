#include "holberton.h"
/**
* _memset - Entry point
* @s: pointer
* @b: char
* @n: int
*
* Description: Put the char store in b in the s space n times
* Return: Pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
