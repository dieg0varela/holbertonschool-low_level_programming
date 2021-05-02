#include "lists.h"
/**
* add_dnodeint_end - Entry point
* @head: pointer to head
* @n: int to store
*
* Description: Add a node tho the end of the list
* Return: Address of new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *copy;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	copy = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (copy->next != NULL)
			copy = copy->next;
		copy->next = new_node;
		new_node->prev = copy;
	}
	return (new_node);
}
