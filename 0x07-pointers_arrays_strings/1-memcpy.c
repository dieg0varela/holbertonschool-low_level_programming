#include "holberton.h"
/**
* _memcpy - Entry Point
* @dest: Destination
* @src: Source
* @n: Times
*
* Description: Copy memory from source to dest n bytes
* Return: Pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
