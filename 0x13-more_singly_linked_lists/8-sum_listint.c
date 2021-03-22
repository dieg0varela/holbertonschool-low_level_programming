#include "lists.h"
/**
* su,_listint - Entry point
* @head: Pointer to head of the list
*
* Description: Adds all the values stored in the list
* Return: The resault of the add
*/
int sum_listint(listint_t *head)
{
	int res = 0;
	listint_t *aux;

	if (head)
	{
		aux = head;
		while (aux)
		{
			res += aux->n;
			aux = aux->next;
		}
	}
	return (res);
}
