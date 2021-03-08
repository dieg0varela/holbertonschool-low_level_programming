#include "dog.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
* _strdup - Entry point
* @str: String
*
* Description: Alocate memoty and duplicate str
* Return: Pointer to str dest
*/
char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *dest;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	for (i = 0 ; i <= len ; i++)
	{
		if (i != len)
			dest[i] = str[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
