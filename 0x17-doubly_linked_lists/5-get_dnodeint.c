#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *copy = head;

	if (!head)
		return (NULL);
	for (i = 0 ; copy->next != '\0' ; i++)
	{
		if (i == index)
			return (copy);
		copy = copy->next;
	}
	return (NULL);
}
