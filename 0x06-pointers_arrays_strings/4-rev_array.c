#include "holberton.h"
/**
* reverse_array - Entry point
* @a: array of ints
* @n: lenght of array
*
* Description: Reverse a array of ints
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int i = 0, temp = 0, j = n - 1;

	for (i = 0 ; i < n / 2 ; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
