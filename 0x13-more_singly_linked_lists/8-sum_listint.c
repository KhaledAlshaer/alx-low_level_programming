#include "lists.h"

/**
 *sum_listint - This is the function
 *@head: this is a variable
 *Return: returns 0
*/
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
