#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "2-strlen.c"
/**
* add_node - Entry point
* @head: pointer to head of the list
* @str: string to add in the list
*
* Description: Add node to te end of the list
* Return: The address of the new element, or NULL if it fail
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *searcher = *head;
	list_t *new_node = malloc(sizeof(list_t) * 1);

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if(!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);

	if (!searcher)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else	
	{
		while (searcher->next)
			searcher = searcher->next;
		new_node->next = NULL;
		searcher->next = new_node;
	}
	return (new_node);
}
