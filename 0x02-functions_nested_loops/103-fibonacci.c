#include <stdio.h>
/**
* main - Entry point
*
* Description: Print the add of numbers of fibonacci secuence are even
* Return: Always 0 (Success)
*/
int main(void)
{
	long a, b, res, i;

	a = 1;
	b = 2;
	i = 2;
	res = 2;
	while (res < 4000000)
	{
		res = a + b;
		if (res % 2 == 0)
		{
			i = i + res;
		}
		a = b;
		b = res;
	}
	printf("%lu\n", i);
	return (0);
}
