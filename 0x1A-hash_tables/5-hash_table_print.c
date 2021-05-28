#include "hash_tables.h"
/**
* hash_table_print - Entry point
* @ht: hash table
*
* Description: Print a hash table
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = ht->size, i = 0;
	hash_node_t *temp;
	int fake_bool = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0 ; i < size ; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (fake_bool == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			fake_bool = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
