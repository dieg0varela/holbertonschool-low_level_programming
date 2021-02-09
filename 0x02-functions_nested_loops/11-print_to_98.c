#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - Entry point
* @n: number to start
*
* Description: Show all number from n to 98
* Return: nothing
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else
	{
		if (n > 98)
		{
			for (i = n ; i >= 98 ; i--)
			{
				printf("%d", i);
				if (i != 98)
					printf(", ");
			}
			printf("\n");
		}
		else
		{
			printf("%d\n", n);
		}
	}
}
