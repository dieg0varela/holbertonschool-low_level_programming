#include "hash_tables.h"
/**
* hash_table_delete - Entry point
* @ht: hash table
*
* Description: Free a hash table
* Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *prev_temp;
	unsigned long int size, i = 0;

	if (!ht || !ht->array)
		return;
	size = ht->size;
	for (i = 0 ; i < size ; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			free(temp->value);
			prev_temp = temp;
			temp = temp->next;
			free(prev_temp);
		}
		free(temp);
	}
	free(ht->array);
	free(ht);
}
