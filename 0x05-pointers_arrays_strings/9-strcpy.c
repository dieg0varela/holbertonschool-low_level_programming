#include "holberton.h"
#include "2-strlen.c"
/**
* _strcpy - Entry point
* @dest: destination
* @src: source
*
* Description: Copy a string from source to destination
* Return: string destination
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, len = _strlen(src);

	for (i = 0 ; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
