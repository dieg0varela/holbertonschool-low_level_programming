#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: Show the last digit of a random number
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	int lnj;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lnj = n % 10;

	if (lnj > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lnj);
	}
	else
	{
		if (lnj == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lnj);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lnj);
		}
	}
	return (0);
}
