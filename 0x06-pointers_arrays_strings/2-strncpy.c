#include "holberton.h"
#include "2-strlen.c"
/**
* _strncpy - Entry point
* @dest: Destination
* @src: Source
* @n: number times
*
* Description:Append at the end of dest n chars of the source string
* Return: Pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int len = _strlen(src), i = 0, j = 0;

	for (i = 0 ; src[j] != '\0' && j != n ; i++, j++)
	{
		dest[i] = src[j];
	}
	if (len < n)
	{
		for (i = len ; i < n ; i++)
			dest[i] = '\0';
	}
	return (dest);
}
