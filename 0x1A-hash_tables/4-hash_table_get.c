#include "hash_tables.h"
/**
* logic_get - Entry point
* @ht: hash table
* @key: key
*
* Description: logic for hash_table_set
* Return: 1 on success or 0 on fail
*/
char *logic_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				return (temp->value);
			}
			temp = temp->next;
		}
	}
	return (NULL);
}

/**
* hash_table_get - Entry point
* @ht: pointer to hash table
* @key: key
*
* Description: Get a key and value on the hash table
* Return: Value of key or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	if (!ht || !key)
		return (0);
	if (!ht->array)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);

	return (logic_get(ht, key));
}
