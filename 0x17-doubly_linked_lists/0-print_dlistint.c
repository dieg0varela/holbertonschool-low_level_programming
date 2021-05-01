#include "lists.h"
#include <stdio.h>
/**
* print_dlistint - Entry point
* @h: head of the list
*
* Description: Print the contect of a int doble list
* Return: Number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while(h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
