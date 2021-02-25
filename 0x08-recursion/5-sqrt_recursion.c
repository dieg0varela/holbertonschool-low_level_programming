#include "holberton.h"
/**
* aux - Entry point
* @n: number
* @i: number
*
* Description: hello
* Return: int
*/
int aux(int n, int i)
{
	int r = 0;

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	r = aux(n, i + 1);
	return (r);
}


/**
* _sqrt_recursion - Entry point
* @n: number
*
* Description: Find the square root of n
* Return: Int resault
*/
int _sqrt_recursion(int n)
{
	int res = 0;

	res = aux(n, 1);
	return (res);
}
