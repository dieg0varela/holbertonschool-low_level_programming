#include "holberton.h"
/**
* print_diagonal - Entry point
* @n: number to work
*
* Description: Print diagonal in fuction of n
* Return: nothing
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (j = 1 ; j <= i ; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
