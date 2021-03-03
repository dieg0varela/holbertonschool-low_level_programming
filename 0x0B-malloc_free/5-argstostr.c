#include "holberton.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
* argstostr - Entry point
* @ac: int
* @av : pointer to char pointer
*
* Description: Contatenate args to a string
* Return: String
*/
char *argstostr(int ac, char **av)
{
	char *res;
	int cont = 0, i = 0, j = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		cont += _strlen(av[i]);
		cont++;
	}
	cont++;

	res = malloc(sizeof(char) * cont);
	if (res == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			res[l] = av[i][j];
			l++;
		}
		res[l] = '\n';
		l++;
	}
	return (res);
}
