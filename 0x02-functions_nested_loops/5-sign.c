#include "holberton.h"
/**
* print_sign -Entry point
* @n: number to check
*
* Descrption: Say if a numeris positive negative or 0
* Return: 1 if is positive, -1 if is negative or 0 if is 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}
