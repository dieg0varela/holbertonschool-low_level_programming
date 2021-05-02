#include "lists.h"
/**
* sum_dlistint - Entry point
* @head: pointer to head
*
* Description: Adds all n values on the list
* Return: value calculated
*/
int sum_dlistint(dlistint_t *head)
{
	int res = 0;
	dlistint_t *copy = head;

	if (!head)
		return (0);
	while (copy)
	{
		res = res + copy->n;
		copy = copy->next;
	}
	return (res);
}
