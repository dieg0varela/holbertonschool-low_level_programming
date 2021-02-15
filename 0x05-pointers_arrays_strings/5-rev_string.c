#include "holberton.h"
/**
* rev_string - Entry point
* @s: String
*
* Description: reverse a string
* Return: Nothing
*/
void rev_string(char *s)
{
	int lenght = 0;

	int i = 0;

	int temp;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{
	}

	lenght = lenght - 1;

	while (i < lenght / 2)
	{
		temp = s[lenght - i];
		s[lenght - i] = s[i];
		s[i] = temp;
		i++;
	}
}
