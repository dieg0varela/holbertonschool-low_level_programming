#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - Entry point
* @b: unsigned int size
*
* Description: Allocate space in memory
* Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
