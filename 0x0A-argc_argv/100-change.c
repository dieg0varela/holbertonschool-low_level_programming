#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: int
* @argv: array
*
* Description: Print the minimun amount of coins for the change
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int cont = 0, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents)
	{
		if (cents >= 25)
		{
			cont++;
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cont++;
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cont++;
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cont++;
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cont++;
			cents -= 1;
		}
	}
	printf("%d\n", cont);
	return (0);
}
