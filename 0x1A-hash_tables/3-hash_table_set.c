#include "hash_tables.h"
/**
 * hash_table_set - Add element to hash table
 * @ht: A pointer to the hash table
 * @key: The key that determines value
 * @value: value
 * Return: returns 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elem;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new_elem = malloc(sizeof(hash_node_t));
	if (new_elem == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_elem->key = strdup(key);
	if (new_elem->key == NULL)
	{
		free(new_elem);
		return (0);
	}
	new_elem->value = value_copy;
	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;

	return (1);
}
