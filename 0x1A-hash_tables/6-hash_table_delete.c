#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp1 = NULL, *tmp2 = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp1 = ht->array[i];

			while (tmp1 != NULL)
			{
				tmp2 = tmp1->next;
				free(tmp1->key);
				free(tmp1->value);
				free(tmp1);
				tmp1 = tmp2;
			}
		}
		else
			free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
