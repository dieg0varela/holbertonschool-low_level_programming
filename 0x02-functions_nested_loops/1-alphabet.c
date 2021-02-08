#include "holberton.h"
/**
* print_alphabet - Entry point
*
* Description: Show alphabet with a function
* Return: Always 0 (suceess)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
