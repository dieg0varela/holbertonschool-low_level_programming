#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - Entry point
* @head: Pointer to head
* @n: int to store in the node
*
* Description: Add new node to the beggining
* Return: Addres of the new element or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t) * 1);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
