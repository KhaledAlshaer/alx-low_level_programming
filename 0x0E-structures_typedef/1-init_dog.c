#include "dog.h"
#include <stddef.h>
/**
 *init_dog- This is the function
 *@d: this is a variable
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: returns nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
