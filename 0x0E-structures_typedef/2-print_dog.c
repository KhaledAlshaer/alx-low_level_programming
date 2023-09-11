#include "dog.h"
#include <stdio.h>

/**
 *print_dog - This is the function
 *@d: this is a variable
 *Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
