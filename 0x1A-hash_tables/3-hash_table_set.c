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
	hash_node_t *current = NULL;

	if (!ht || strcmp(key, "") == 0 || !key || !value)
		return (0);
	new_set = malloc(sizeof(hash_node_t));
	if (!new_set)
		return (0);
	new_set->key = malloc(sizeof(char) * strlen(key) + 1);
	new_set->value = malloc(sizeof(char) * strlen(value) + 1);
	strcpy(new_set->key, key);
	strcpy(new_set->value, value);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
	{
		new_set->next = NULL;
		ht->array[index] = new_set;
		return (1);
	}
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			break;
		current = current->next;
	}
	if (current)
	{
		free(current->value);
		current->value = malloc(sizeof(char) * strlen(value) + 1);
		if (!current->value)
			return (0);
		strcpy(current->value, value);
		return (1);
	}
	new_set->next = ht->array[index];
	ht->array[index] = new_set;
	return (1);
}
