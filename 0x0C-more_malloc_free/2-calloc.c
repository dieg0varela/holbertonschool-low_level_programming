#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - Entry point
* @nmemb: Number of elements
* @size: size of elements
*
* Description: Allocates memory for an array of nmemb elements of size bytes
* Return: Pointer to the array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ret;
	unsigned int i = 0;

	if ((nmemb || size) == 0)
		return (NULL);
	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
		ret[i] = '\0';
	return (ret);
}
