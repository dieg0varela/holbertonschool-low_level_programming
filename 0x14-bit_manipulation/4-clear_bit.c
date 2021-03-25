#include "holberton.h"
/**
* clear_bit - Entry point
* @n: Number
* @index: Place to set the bit
*
* Description: Set the bit in place index to 0
* Return: 1 if works -1 if fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = sizeof(n) * 8;

	if (index > max)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
