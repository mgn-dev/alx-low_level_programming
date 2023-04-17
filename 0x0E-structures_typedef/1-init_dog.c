#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog.
* @d: dog structure.
* @name: name of dog.
* @age: age of dog.
* @owner: dog's owner.
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
