#include "3-calc.h"
/**
* main- Entry point
* @argc: argument count
* @argv: argument vector
*
* Description: A calculator
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int (*fun)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	fun = get_op_func(argv[2]);
	res = (*fun)(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
