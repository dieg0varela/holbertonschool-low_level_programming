#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: int
* @argv: array
*
* Description: Multiplies 2 numbers
* Return: 0 success 1 error
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
