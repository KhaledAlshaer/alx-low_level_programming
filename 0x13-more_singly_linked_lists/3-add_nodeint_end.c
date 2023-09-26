#include "lists.h"
#include <stdlib.h>

/**
 **add_nodeint_end - This is the function
 *@head: this is a variable
 *@n: this is a variable
 *Return: returns 0
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new;
	}

	return (new);
}
