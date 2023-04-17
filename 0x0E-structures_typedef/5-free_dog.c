#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
* free_dog - function that frees dogs.
* @d: dog structure.
*
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
