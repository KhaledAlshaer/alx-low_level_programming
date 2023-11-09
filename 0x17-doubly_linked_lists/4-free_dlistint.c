#include "list.h"
/**
 *free_dlistint - this is the function
 *@head: this is a vraiable
  *Return: return 0
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
