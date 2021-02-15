#include "holberton.h"
#include "2-strlen.c"
/**
* rev_string - Entry point
* @s: String
*
* Description: reverse a string
* Return: Nothing
*/
void rev_string(char *s)
{
	int lenght = _strlen(s) - 1;

	int i = 0;

	int temp;

	while (i < lenght / 2)
	{
		temp = s[lenght - i];
		s[lenght - i] = s[i];
		s[i] = temp;
		i++;
	}
}
