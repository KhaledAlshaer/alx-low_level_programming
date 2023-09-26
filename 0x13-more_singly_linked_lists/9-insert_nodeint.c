#include "lists.h"

/**
 **insert_nodeint_at_index- This is the function
 *@head: this is a variable
 *@idx: this is a variable
 *@n: this is a variable
 *Return: returns 0
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint_end(head, n));

	current = *head;
	count = 0;

	while (count < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
