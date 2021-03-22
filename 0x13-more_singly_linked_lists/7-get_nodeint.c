#include "lists.h"
/**
* get_nodeint_at_index - Entry point
* @head: pointer to head of the list
* @index: place in the list you need the data
*
* Description: Return the node in the index position of the list
* Return: the node itself or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux;

	if (head)
	{
		aux = head;
		while (aux && i != index)
		{
			aux = aux->next;
			i++;
		}
		if (aux)
			return (aux);
		else
			return (NULL);
	}
	else
		return (NULL);
}
