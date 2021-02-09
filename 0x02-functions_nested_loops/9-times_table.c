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
		for (num = 0 ; num <= 9 ; num++)
		{
			res = num * i;
			if (res <= 9)
			{
				_putchar(res + '0');
				if (num == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				if (num == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
