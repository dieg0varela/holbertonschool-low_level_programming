#include "holberton.h"
/**
* aux - Entry point
* @n: number
* @i: number
*
* Description hello
* Return: int
*/
int aux(int n, int i)
{
	int r = 3;

	if (n == 1 || n < 0)
		return (0);

	if (n % i != 0)
	{
		if (i != n - 1)
			r = aux(n, i + 1);
		else
			return (1);
	}

	if (i == 1)
		r = aux(n, i + 1);
	else
		if (n % i == 0)
			return (0);

	return (r);
}

/**
* is_prime_number - Entry point
* @n: number
*
* Description: Say if a number is prime or not
* Return: Int
*/
int is_prime_number(int n)
{
	int i = aux(n, 1);

	return (i);
}
