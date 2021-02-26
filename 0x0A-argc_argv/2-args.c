#include <stdio.h>
/**
* main - Entry point
* @argc: int
* @argv: array
*
* Description: Print script name
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	argc = argc;
	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
