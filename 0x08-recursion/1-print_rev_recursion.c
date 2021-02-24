#include "holberton.h"
/**
* _print_rev_recursion - Entry point
* @s: String
*
* Description: Print a  string in reverse
* Return: Nothing
*/
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
	}
}
