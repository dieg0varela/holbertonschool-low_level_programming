#include "holberton.h"
/**
* swap_int - Entry point
* @a: pointer 1
* @b: pointer 2
*
* Description: Swap the values between a and b
* Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
