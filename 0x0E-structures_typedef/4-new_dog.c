#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* @dest: destination buffer
* @src: source string
*
* Return: destination buffer
*/
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p);
}


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

	char *n = name;
	char *o = owner;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	else
	{

		dog->name = n;
		dog->age = age;
		dog->owner = o;

		return (dog);
	}
}
