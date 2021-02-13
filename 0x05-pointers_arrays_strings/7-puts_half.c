#include "holberton.h"
#include "2-strlen.c"
/**
* puts_half - Entry point
* @str: String
*
* Description: Print the half of a string
* Return: Nothing
*/
void puts_half(char *str)
{
	int len = _strlen(str), i = 0;

	if (len % 2 != 0)
		len = len - 1;

	for (i = len / 2 ; i < len ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
