#include <stdio.h>
/**
* main - Entry point
*
* Description: Print the first 50 numbers of fibonacci secuence
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long a, b, res, i;

	a = 1;
	b = 2;
	printf("%lu, ", a);
	printf("%lu, ", b);
	for (i = 3 ; i <= 97 ; i++)
	{
		res = a + b;
		printf("%lu", res);
		if (i != 97)
		{
			printf(", ");
		}
		a = b;
		b = res;
	}
	printf("\n");
	return (0);
}
