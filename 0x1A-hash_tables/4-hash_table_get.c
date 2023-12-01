#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: he hash table you want to look into.
 * @key: the key you are looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;


	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (ht->tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
