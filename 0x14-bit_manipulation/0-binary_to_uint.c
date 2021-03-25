#include "holberton.h"
#include "2-strlen.c"
#include <stdio.h>
/**
* _isdigit - Entry point
* @c: numbert to work
*
* Description: Say if c is a valid binary number or not
* Return: 1 if is valid, 0 otherwise
*/
int isvalidBin(const char *c)
{
	int i = 0;

	for (i = 0; c[i] != '\0' ; i++)
	{
		if (c[i] == '0' || c[i] == '1')
		{
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/**
* binaty_to_unit - Entry point
* @b: String contains the binary number
*
* Description: Convert the binary string into unsigned int
* Return: The converted number or 0 If fails
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, valplace = 1, size = 0;
	int i = 0;

	if (!b)
		return (0);
	if (!isvalidBin(b))
		return (0);

	size = _strlen(b);
	for ( i = size - 1 ; i >= 0 ; i--)
	{
		res += (b[i] - '0') * valplace;
		valplace *= 2;
	}
	return (res);
}
