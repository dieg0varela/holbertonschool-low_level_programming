#include "holberton.h"
#include "2-strlen.c"
/**
* puts2 - Entry point
* @str: String
*
* Description: Print every two characters
* Return: Nothing
*/
void puts2(char *str)
{
	int len = _strlen(str) - 1, i = 0;

	while (i <= len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
