#include "holberton.h"
#include <stdio.h>
/**
* print_binary - Entry point
* @n: Number to print in binary
*
* Description: Print the given number in binary
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;

	if (n != 0)
	{
		i = n & 1;
		print_binary(n >> 1);
		_putchar(i + '0');
	}
}
