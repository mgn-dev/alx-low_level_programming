#include <stdio.h>
#include "dog.h"

/**
* print_dog - function that prints a struct dog
* @d:
*
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("name: %s\n", "(nil)");
		else
			printf("name: %s\n", d->name);

		if (d->age == 0.0)
			printf("age: %s\n", "(nil)");
		else
			printf("age: %f\n", d->age);

		if (d->owner == NULL)
			printf("name: %s\n", "(nil)");
		else
			printf("name: %s\n", d->owner);
	}
}
