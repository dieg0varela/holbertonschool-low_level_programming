#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main- Entry point
* @argc: argument count
* @argv: argument vector
*
* Description: Print the opcode from the function
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	char *p;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)&main;
	for (i = 0 ; i < atoi(argv[1]) ; i++)
	{
		printf("%.2hhx", p[i]);
		if (i < (atoi(argv[1]) - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
