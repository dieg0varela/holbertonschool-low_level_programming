#include "lists.h"
/**
* list_len - Entry point
* @h: Pointer to list
*
* Description: Calculate the length of a list
* Return: Number of elements
*/
size_t list_len(const list_t *h)
{
	int cont = 0;

	if (h)
	{
		while (h)
		{
			cont++;
			h = h->next;
		}
	}
	return (cont);
}
