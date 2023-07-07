#include "hash_tables.h"
/**
 * hash_djb2 - Hash function to implement djb2
 * @str: string argument
 * Return: returns the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++))
		hash = ((hash << 5) + hash) + i;
	return (hash);
}
