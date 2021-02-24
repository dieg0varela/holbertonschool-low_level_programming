#include "holberton.h"
/**
* _strlen_recursion - Entry point
* @s: String
*
* Description: Print the length of a string
* Return: Int lenght
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[0] != '\0')
	{
		i += _strlen_recursion(&s[1]);
		i++;
	}
	return (i);
}
