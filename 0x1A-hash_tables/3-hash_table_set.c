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
	unsigned long int index, i;
	hash_node_t *new_set = NULL;
	char *cvalue;

	if (!ht || strcmp(key, "") == 0 || !key || !value)
		return (0);
	cvalue = strdup(value);
	if (cvalue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cvalue;
			return (1);
		}
	}

	new_set = malloc(sizeof(hash_node_t));
	if (new_set == NULL)
	{
		free(cvalue);
		return (0);
	}
	new_set->key = strdup(key);
	if (new_set->key == NULL)
	{
		free(new_set);
		return (0);
	}
	new_set->value = cvalue;
	new_set->next = ht->array[index];
	ht->array[index] = new_set;

	return (1);
}
