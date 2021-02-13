#include "holberton.h"
/**
* _puts - Entry point
* @str: Array of char
*
* Description: print the content of str
* Return: Nothing
*/
void _puts(char *str)
{
	int i = 0;

	char flag = 0;

	while (!flag)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			flag = 1;
		}
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
}
