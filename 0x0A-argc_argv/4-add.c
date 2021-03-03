#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: int
* @argv: array
*
* Description: Add all the aruments
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i = 0, j = 0, res = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
