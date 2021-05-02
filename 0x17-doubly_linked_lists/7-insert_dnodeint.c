#include "lists.h"
/**
* insert_dnodeint_at_index - Entry point
* @h: pinter to head
* @idx: index to add node
* @n: number to store in the list
*
* Description: Add a node to a list in a specific index
* Return: Address of new node or NULL if fail
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *copy = *h, *new_node;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = copy->next;
		copy->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0 ; copy != '\0' ; i++)
	{
		if (i == idx)
		{
			new_node->next = copy;
			new_node->prev = copy->prev;
			(copy->prev)->next = new_node;
			copy->prev = new_node;
			return (new_node);
		}
		copy = copy->next;
	}
	return (NULL);
}
