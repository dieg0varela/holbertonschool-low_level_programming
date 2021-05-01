#include "lists.h"
/**
* dlistint_len - Entry point
* @h: pointer to head
*
* Description: Count nodes in list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
