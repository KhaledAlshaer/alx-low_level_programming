#include "lists.h"

/**
 *pop_listint - This is the function
 *@head: this is a variable
 *Return: returns 0
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
