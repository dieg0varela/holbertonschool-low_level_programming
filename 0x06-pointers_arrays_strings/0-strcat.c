#include "holberton.h"
#include "2-strlen.c"
/**
* _strcat - Entry point
* @dest: Destination
* @src: Source
*
* Description: Append at the end of destination the source string
* Return: Pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest), i = 0, j = 0;

	for (i = len ; src[j] != '\0' ; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
