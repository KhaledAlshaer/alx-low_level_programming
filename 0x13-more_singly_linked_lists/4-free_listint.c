#include "lists.h"

/**
 *free_listint - This is the function
 *@head: this is a variable
 *Return: returns 0
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
