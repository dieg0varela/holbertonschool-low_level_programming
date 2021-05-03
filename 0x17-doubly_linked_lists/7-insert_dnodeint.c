#include "lists.h"
/**
* list_len - Calculate the length of the list
* @h: pointer to head
*
* Return: size
*/
unsigned int list_len(dlistint_t *h)
{
	int i = 0;
	dlistint_t *copy = h;

	while (copy)
	{
		i++;
		copy = copy->next;
	}
	return (i);
}

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
	if (list_len(*h) == idx)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		if (!(*h))
		{
			*h = new_node;
			return (new_node);
		}
		new_node->next = copy;
		copy->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0 ; copy != '\0' || i == idx ; i++)
	{
		if (i == idx)
		{
			new_node->next = copy;
			new_node->prev = copy->prev;
			copy->prev->next = new_node;
			copy->prev = new_node;
			return (new_node);
		}
		copy = copy->next;
	}
	return (NULL);
}
