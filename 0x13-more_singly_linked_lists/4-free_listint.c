#include "lists.h"
#include <stdlib.h>
/**
* free_listint - Entry point
* @head: Pointer to head of the list
*
* Description: Free a list of ints
* Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *aux;
	listint_t *aux_next;

	if (head)
	{
		aux = head;
		aux_next = head->next;
		while (aux_next)
		{
			free(aux);
			aux = aux_next;
			aux_next = aux_next->next;
		}
		free(aux);
	}
}
