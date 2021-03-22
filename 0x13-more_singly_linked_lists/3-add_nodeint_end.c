#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - Entry point
* @head: Pointer to head of the list
* @n: number to add in the list
*
* Description: Add new node tothe end of the list
* Return: Addtess of the new node or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *searcher = *head;

	new_node = malloc(sizeof(listint_t) * 1);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!searcher)
		*head = new_node;
	else
	{
		while (searcher->next)
			searcher = searcher->next;
		searcher->next = new_node;
	}
	return (new_node);
}
