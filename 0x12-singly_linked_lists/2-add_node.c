#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include "2-strlen.c"
/**
* add_node - Entry point
* @head: pointer to head of the list
* @str: string to put in the list
*
* Description: Add a new node to the beginning of the list
* Return: the address of the new element, or NULL if it fail
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t) * 1);
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
