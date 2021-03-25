#include "holberton.h"
/**
* get_bit - Entry point
* @n: Number
* @index: Place to get bit
*
* Description: Get the bit in the given index
* Return: Value in the place
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max = sizeof(n) * 8;

	if (index > max)
		return (-1);
	return ((n >> index) & 1);
}
