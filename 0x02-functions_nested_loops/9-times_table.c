#include "holberton.h"
/**
* times_table - Entry point
*
* Description: Show all tables
* Return: nothing
*/
void times_table(void)
{
	int num, i, res;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');
		for (num = 1 ; num <= 9 ; num++)
		{
			res = num * i;
			if (res <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
