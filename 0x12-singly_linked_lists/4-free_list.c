#include "lists.h"
#include <stdlib.h>
/**
* free_list - Entry point
* @head: Pointer to head of the list
*
* Description: Free a list
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *aux = head;
	list_t *aux_next;


	aux_next = head->next;
	while (aux_next)
	{
		free(aux->str);
		free(aux);
		aux = aux_next;
		aux_next = aux_next->next;
	}
	free(aux->str);
	free(aux);

}
