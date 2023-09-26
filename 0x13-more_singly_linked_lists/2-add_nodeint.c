#include "lists.h"

/**
 **add_nodeint - This is the function
 *@head: this is a variable
 *n@: this is a variable
 *Return: returns 0
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
