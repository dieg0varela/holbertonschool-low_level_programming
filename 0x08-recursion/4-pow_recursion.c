#include "holberton.h"
/**
* _pow_recursion - Entry point
* @x: int
* @y: int
*
* Description: Print x raised to the power of y
* Return: Int
*/
int _pow_recursion(int x, int y)
{
	int res = 0;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	res = x * _pow_recursion(x, y - 1);
	y--;
	return (res);
}
