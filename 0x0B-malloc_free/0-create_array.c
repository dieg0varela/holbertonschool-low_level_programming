#include "holberton.h"
#include <stdlib.h>
/**
* create_array - Entry point
* @size: int
* @c: char
*
* Description: Make an array and fill with char c
* Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str = malloc(size + 1);

	if (str == 0 || size == 0)
		return (NULL);
	for (i = 0 ; i <= size ; i++)
	{
		if (i != size)
			str[i] = c;
		else
			str[i] = '\0';
	}
	return (str);
}
