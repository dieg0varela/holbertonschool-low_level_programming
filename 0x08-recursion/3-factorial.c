#include "holberton.h"
/**
* factorial - Entry point
* @n: Number
*
* Description: Print factorial of a number
* Return: Int resault
*/
int factorial (int n)
{
	int i = 1, r = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	if (n > 0)
	{
		r = factorial(n - 1);
		i = n * r;
	}
	return (i);
}
