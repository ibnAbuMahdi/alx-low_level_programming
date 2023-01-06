#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * key_index - returns the index of key
 * @key: the key
 * @size: the size of the hash table
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
