#include "holberton.h"
#include <stdio.h>
/**
* main - Entry point
*
* Description: Add all numbers divisibles by 3 or 5 and print
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, res;

	res = 0;
	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			res = res + i;
		}
	}
	printf("%d\n", res);
	return (0);
}
