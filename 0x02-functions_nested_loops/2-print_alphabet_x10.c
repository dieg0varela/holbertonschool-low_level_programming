#include "holberton.h"
/**
* print_alphabet_x10 - Entry point
*
* Description: Print alphabet x10
* Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int i;

	char c;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
