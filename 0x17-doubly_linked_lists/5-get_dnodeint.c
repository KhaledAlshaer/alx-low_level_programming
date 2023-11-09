#include "lists.h"
/**
 *get_dnodeint_at_index - this is the function
 *@head: this is a vraiable
 *@index: this is a vraiable
 *Return: return 0
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}

	return (NULL);
}
