#include "holberton.h"
/**
* print_triangle - Entry point
* @size: number
*
* Description: Print triangle
* Return: nothing
*/
void print_triangle(int size)
{
	int alto, ancho;

	if (size > 0)
	{
		for (alto = 1 ; alto <= size ; alto++)
		{
			for (ancho = 1 ; ancho <= size ; ancho++)
			{
				if (ancho <= (size - alto))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
