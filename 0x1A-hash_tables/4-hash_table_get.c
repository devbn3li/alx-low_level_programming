#include "hash_tables.h"
/**
 * hash_table_get - Retrieve value associated with a key in hash table
 * @ht: Ptr to hash table
 * @key: Key to get the value of
 * Return: If key not found - NULL
 * Otherwise - value associated with key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	temp = ht->array[index];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	return ((temp == NULL) ? NULL : temp->value);
}
