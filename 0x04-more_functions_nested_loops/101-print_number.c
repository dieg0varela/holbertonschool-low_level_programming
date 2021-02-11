#include "holberton.h"
/**
* print_number - Entry point
* @n: number to work
*
* Description: Print number
* Return: nothing
*/
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;
	if ((i / 10) != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
