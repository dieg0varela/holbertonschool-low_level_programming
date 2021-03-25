#include "holberton.h"
/**
* flip_bits - Entry point
* @n: Number 1
* @m: NUmber 2
*
* Description: Calculate the num of flips need to get num 2 from num1
* Return: Number of flips
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0, num = 0, temp = 0;

	num = n ^ m;
	for (; 1==1 ;)
	{
		temp = num & 1;
		if (temp == 1)
			res++;
		if (num == 0)
			break;
		num = num >> 1;
	}
	return (res);
}
