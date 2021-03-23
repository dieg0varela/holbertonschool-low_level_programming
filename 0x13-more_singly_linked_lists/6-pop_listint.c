#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - Entry point
* @head: Pointer to head of the list
*
* Description: Delete the first node of the list and return the value
* Return: Value in the node
*/
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n = 0;

	if (*head)
	{
		aux = *head;
		n = aux->n;
		if (aux->next)
			*head = aux->next;
		else
			*head = NULL;
		free(aux);
	}
	return (n);
}
