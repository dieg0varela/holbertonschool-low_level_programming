#include "lists.h"
/**
* listint_len - Entry point
* @h: Pointer to list
*
* Description: Counte the amount of nodes in the list
* Return: Number of elements
*/
size_t listint_len(const listint_t *h)
{
	int pichu = 0;

	if (h)
	{
		while (h)
		{
			pichu++;
			h = h->next;
		}
	}
	return (pichu);
}
