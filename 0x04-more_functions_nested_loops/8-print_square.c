#include "holberton.h"
/**
* print_square - Entry point
* @size: size of square
*
* Description: Print a square of size determinated
* Return: nothing
*/
void print_square(int size)
{
	int alto, ancho;

	if (size > 0)
	{
		for (alto = 1 ; alto <= size ; alto++)
		{
			for (ancho = 1 ; ancho <= size ; ancho++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
