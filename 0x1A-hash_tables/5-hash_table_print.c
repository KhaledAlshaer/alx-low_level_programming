#include "hash_tables.h"

/**
 *hash_table_print - this is the function
 *@ht: this is a vraiable
 *Return: return 0
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node;
	char *comma = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (idx < ht->size)
	{
		node = ((ht->array)[idx]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		idx++;
	}
	puts("}");
}
