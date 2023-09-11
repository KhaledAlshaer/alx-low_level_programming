#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - This is the function
 *@dog_t *d: this is a variable
 *Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
