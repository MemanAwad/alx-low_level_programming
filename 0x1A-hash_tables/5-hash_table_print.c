#include "hash_tables.h"

/**
 * void hash_table_print - function that prints a hash table.
 * @ht: the hash table.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, frist = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			tmp = ht->array[i];

		while(tmp != NULL)
		{
			if (frist == 0)
			{
				printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
				frist = 1;
			}
			else
			{
				printf(" ,\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
			}
			tmp = tmp->next;
		}
	}
	printf("}\n");
}