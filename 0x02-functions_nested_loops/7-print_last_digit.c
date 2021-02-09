#include "holberton.h"
/**
* print_last_digit - Entry point
* @i: nubert will check
*
* Description: Return the las digit of a number
* Return: the las digit
*/
int print_last_digit(int i)
{
	int res;

	res = i % 10;
	if (res < 0)
	{
		res = -res;
	}
	_putchar(res + '0');
	return (res);
}
