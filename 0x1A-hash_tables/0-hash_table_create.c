#include "hash_tables.h"
/**
* hash_table_create - Entry point
* @size: size for array
*
* Description: Create a hash table
* Return: hash_table_t on success, NULL  on failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *res;

	res = malloc(sizeof(hash_table_t));
	if (!res)
		return (NULL);
	res->size = size;
	res->array = malloc(sizeof(hash_node_t *) * size);
	if (!res->array)
	{
		free(res);
		return (NULL);
	}

	for(i = 0 ; i < size ; i++)
	{
		res->array[i] = NULL;
	}

	return (res);
}
