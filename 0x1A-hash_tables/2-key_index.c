#include "hash_tables.h"
/**
 * key_index - Get the index of key/value
 * @key: key argument
 * @size: hash table size
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
