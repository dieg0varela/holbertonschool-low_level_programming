#include "holberton.h"
#include "2-strlen.c"
/**
* _strncat - Entry point
* @dest: Destination
* @src: Source
* @n: number times
*
* Description:Append at the end of dest n chars of the source string
* Return: Pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest), i = 0, j = 0;

	for (i = len ; src[j] != '\0' && j != n ; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
