#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* delete_nodeint_at_index - Entry point
* @head: Pointer to head of the list
* @index: place to the list you want to insert the new node
*
* Description: Delete a node in the idx place of the list
* Return: 1 success -1 error
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	listint_t *aux_prev;
	unsigned int i = 0;

	if (index == 0)
	{
		if (*head)
		{
			*head = aux->next;
			free(aux);
		}
		else
			return (-1);
		return (1);
	}
	if (aux)
	{
		while (aux && i != index)
		{
			aux_prev = aux;
			aux = aux->next;
			i++;
		}
		if (i == index)
		{
			aux_prev->next = aux->next;
			free(aux);
			return (1);
		}
		else
			return (-1);
	}
	return (-1);
}
