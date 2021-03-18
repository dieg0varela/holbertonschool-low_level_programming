#include "lists.h"
#include <stdio.h>
/**
* print_list - Entry point
* @h: pointer to list
*
* Description: Print te content of a list
* Return: Count of nodes printed
*/
size_t print_list(const list_t *h)
{
	int cont = 0;

	if (h)
	{
		while (h)
		{
			if (h->str)
				printf("[%u] %s\n", h->len, h->str);
			else
				printf("[0] (nil)\n");
			h = h->next;
			cont++;
		}
	}
	return (cont);
}
