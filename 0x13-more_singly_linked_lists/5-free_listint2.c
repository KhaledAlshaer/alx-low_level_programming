#include "lists.h"

/**
 *free_listint2 - This is the function
 *@head: this is a variable
 *Return: returns 0
*/
void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *aux;

	if (head == NULL)
	{
		return;
	}

	curr = *head;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}

	*head = NULL;
}
