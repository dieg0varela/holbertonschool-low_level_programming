#include "lists.h"
/**
* free_dlistint - Entry point
* @head: pointer to head
*
* Description: Free a list
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	if (head)
	{
		while (head->next != NULL)
		{
			copy = head;
			head = head->next;
			free(copy);
		}
		free(head);
	}
}
