#include "holberton.h"
void printnum(int i, int num, int n);

/**
* print_times_table - Entry point
* @n: number to work
*
* Description: Show all tables
* Return: nothing
*/
void print_times_table(int n)
{
	int num = 0, i = 0;

	if (n > 0 && n < 15)
	{

		printnum(i, num, n);
	}
}
/**
* printnum - Entry point
* @i: number
* @num: number
* @n: number
*
* Description: Do all the logic
* Return: nothing
*/
void printnum(int i, int num, int n)
{
	int res;

	for (i = 0 ; i <= n ; i++)
	{
		_putchar('0');
			for (num = 1 ; num <= n ; num++)
			{
				res = num * i;
				if (res <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else
				{
					if (res <= 99)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((res / 10) + '0');
						_putchar((res % 10) + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar((res / 100) + '0');
						_putchar(((res / 10) / 10) + '0');
						_putchar((res % 10) + '0');
					}
				}
			}
		_putchar('\n');
		}
}
