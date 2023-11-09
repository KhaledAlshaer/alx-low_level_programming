#include "lists.h"
/**
 *sum_dlistint - this is the function
 *@head: this is a vraiable
 *Return: return 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
