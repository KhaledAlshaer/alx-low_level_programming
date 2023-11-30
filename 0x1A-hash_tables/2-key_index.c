#include "hash_tables.h"

/**
 *key_index - this is the function
 *@key: this is a vraiable
 *@size: this is a vraiable
 *Return: return 0
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
