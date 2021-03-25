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
	unsigned int len = 1, val = 1, i = 0;

	while (val < n)
	{
		len++;
		val *= 2;
	}
	for (i = len ; i != 0 ; i--)
	{
		if (n >= val)
		{
			_putchar('1');
			n -= val;
			val = val * 0.5;
		}
		else
		{
			if (i != len || n == 0)
				_putchar('0');
			val = val * 0.5;
		}
	}

}
