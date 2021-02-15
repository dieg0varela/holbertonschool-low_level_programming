#include "holberton.h"
#include "2-strlen.c"
/**
* print_rev - Entry point
* @s: Array of char
*
* Description: Print the string backwords
* Return: Nothing
*/
void print_rev(char *s)
{
	int length = 0;

	length = _strlen(s) - 1;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
