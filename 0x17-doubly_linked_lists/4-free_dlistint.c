#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	while(head->next != NULL)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
	free(head);
}
