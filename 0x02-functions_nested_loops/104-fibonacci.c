#include <stdio.h>
/**
* main - Entry point
*
* Description: Print the first 50 numbers of fibonacci secuence
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long long int a, b, res, i;

	a = 1;
	b = 2;
	printf("%llu, ", a);
	printf("%llu, ", b);
	for (i = 3 ; i <= 98 ; i++)
	{
		res = a + b;
		printf("%llu", res);
		if (i != 98)
		{
			printf(", ");
		}
		a = b;
		b = res;
	}
	printf("\n");
	return (0);
}
