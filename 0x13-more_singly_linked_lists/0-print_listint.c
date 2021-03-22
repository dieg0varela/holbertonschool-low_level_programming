#include "lists.h"
#include <stdio.h>
/**
* print_listint - Entry point
* @h: Pointer to list
*
* Description: Print content of list of ints
* Return: Number of nodes printed
*/
size_t print_listint(const listint_t *h)
{
	unsigned int pichu = 0;

	if (h)
	{
		while (h)
		{
			printf("%i\n", h->n);
			pichu++;
			h = h->next;
		}
	}
	return (pichu);
}
