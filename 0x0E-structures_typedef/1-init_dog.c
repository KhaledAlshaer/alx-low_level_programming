#include "dog.h"

/**
 *init_dog- This is the function
 *@d: this is a variable
 *@name: this is a variable
 *@age: this is a variable
 *@owner: this is a variable
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
