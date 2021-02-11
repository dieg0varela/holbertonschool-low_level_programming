#include "holberton.h"
/**
* print_most_numbers -Entry point
*
* Description: Print numbers from 0 to 9 exept 2 and 4
* Return: nothing
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i != 4 && i != 2)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
