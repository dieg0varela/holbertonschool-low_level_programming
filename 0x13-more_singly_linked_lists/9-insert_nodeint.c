#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* insert_nodeint_at_index - Entry point
* @head: Pointer to head of the list
* @idx: place to the list you want to insert the new node
* @n: value stored in the new node
*
* Description: Insert a new node in the idx place of the list
* Return: The address of the new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	listint_t *aux_prev;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t) * 1);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		if (*head)
			new_node->next = (*head);
		else
			new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if (aux)
	{
		while (aux && i != idx)
		{
			aux_prev = aux;
			aux = aux->next;
			i++;
		}
		if (i == idx)
		{
			new_node->next = aux;
			aux_prev->next = new_node;
			return (new_node);
		}
		else
			return (NULL);
	}
	free(new_node);
	return (NULL);
}
