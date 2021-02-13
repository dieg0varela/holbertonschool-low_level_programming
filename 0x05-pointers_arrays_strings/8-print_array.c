#include "holberton.h"
#include <stdio.h>
/**
* print_array - Entry point
* @a: array
* @n: number to print
*
* Description: Print n numbers in the array
* Return: Nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
