#include "lists.h"

/**
 *delete_nodeint_at_index - This is the function
 *@head: this is a variable
 *@index: this is a variable
 *Return: returns 0
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	previous = NULL;
	count = 0;

	while (current != NULL)
	{
		if (count == index)
	{
		if (previous == NULL)
			*head = current->next;
		else
			previous->next = current->next;

		free(current);
		return (1);
	}

		previous = current;
		current = current->next;
		count++;
	}

	return (-1);
}
