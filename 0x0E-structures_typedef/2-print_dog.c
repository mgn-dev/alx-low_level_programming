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
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %5f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
