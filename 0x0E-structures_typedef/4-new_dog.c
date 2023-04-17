#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
* new_dog - function that creates a new dog.
* @name: name of dog.
* @age: age of dog.
* @owner: dog's owner.
*
* Return: pointer to a dog structure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	(void)age;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	else
	{
		dog->name = name;
		dog->owner = owner;

		return (dog);
	}
}
