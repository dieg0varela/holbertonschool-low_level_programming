#include "hash_tables.h"
/**
* key_index - Entry point
* @key: key
* @size: size of the array
*
* Description: Obtain index for a specific key
* Return: index of the array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
