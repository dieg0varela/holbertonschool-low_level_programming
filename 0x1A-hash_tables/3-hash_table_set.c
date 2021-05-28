#include "hash_tables.h"
/**
* logic - Entry point
* @ht: hash table
* @key: key
* @val: value
*
* Description: logic for hash_table_set
* Return: 1 on success or 0 on fail
*/
int logic(hash_table_t *ht, const char *key, char *val)
{
	unsigned long int index = 0;
	hash_node_t *new_node, *temp;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(val);
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new_node->key = (char *)key;
		new_node->value = val;
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = val;
				return (1);
			}
			temp = temp->next;
		}
		new_node->key = (char *)key;
		new_node->value = val;
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

/**
* hash_table_set - Entry point
* @ht: pointer to hash table
* @key: key
* @value: value
*
* Description: Set a key and value on the hash table
* Return: 1 is success, 0 in failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val;

	if (!ht || !key || !value)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);

	val = strdup(value);
	if (!val)
	{
		return (0);
	}

	return (logic(ht, key, val));
}
