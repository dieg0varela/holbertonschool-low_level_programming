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
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		cont++;
	}
	printf("%d\n", cont);
	return (0);
}
