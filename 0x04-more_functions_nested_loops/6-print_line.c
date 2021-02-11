#include "holberton.h"
/**
* print_line - Entry point
* @n: number to work
*
* Description: Draw lines n times
* Return: nothing
*/
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
