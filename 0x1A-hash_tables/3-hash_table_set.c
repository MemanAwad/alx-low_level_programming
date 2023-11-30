#include "hash_tables.h"

/**
 * hash_table_set - function that add an element to the hash table
 * @ht:hash table you want to add or update the key/value to.
 * @key: is the key.(cannot be empty string)
 * @value:  the value associated with the key (value must be duplicated.
 * value can be an empty string)
 *
 * Return: 1 if success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_set = NULL;

	if (key == NULL)
		return (0);

	new_set->key = strdup(key);
	new_set->value = strdup(value);
	new_set->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
	       ht->array[index] = new_set;
	       return (1);
	}
	else
	{
		new_set->next = ht->array[index];
		ht->array[index] = new_set;
	}
	return (1);
}
