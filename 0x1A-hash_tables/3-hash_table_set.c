#include "hash_tables.h"
/**
 * hash_table_set - Add or update an element in hash table
 * @ht: Ptr to hash table
 * @key: Key to add - cann't be an empty string
 * @value: Value associated with key
 *
 * Return: On failure - 0 or Otherwise - 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cp_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cp_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cp_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
