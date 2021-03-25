#include "holberton.h"
#include "100-atoi.c"
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
void rec_btouint(unsigned int num, unsigned int *valplace, unsigned int *res)
{
	if (num)
	{
		*res += (num % 10) * *valplace;
		*valplace *= 2;
		num = num / 10;
		rec_btouint(num, valplace, res);
	}
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
	unsigned int res = 0, valplace = 1, num = 0;

	if (!b)
		return (0);
	if (!isvalidBin(b))
		return (0);

	num = _atoi(b);
	rec_btouint(num, &valplace, &res);
	return (res);
}
