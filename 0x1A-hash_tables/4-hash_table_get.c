#include "hash_tables.h"

/**
 * hash_table_get - this function gets a value from a table
 * @ht: hash table
 * @key: key to get the value from
 *
 * Return: value or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp((ht->array[index])->key, key) == 0)
		{
			return ((ht->array[index])->value);
		}
		ht->array[index] = (ht->array[index])->next;
	}
	return (NULL);
}
