#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
* _strlen - returns the length of a string.
* @s: a string argument.
*
* Return: length of string argument.
*/
int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s++)
		{
			length++;
		}
	}

	return (length);
}

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* @src: source string
*
* Return: destination buffer
*/
char *_strcpy(char *src)
{
	int size = _strlen(src), i;
	char *p = malloc(size + 1);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			p[i] = src[i];
		p[i] = '\0';

		return (p);
	}
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

	dog = malloc(sizeof(struct dog));

	if (dog == NULL)
	{
		return (NULL);
	}
	else
	{
		dog->name = NULL;
		dog->age = 0.0;
		dog->owner = NULL;

		dog->name = _strcpy(name);
		dog->age = age;
		dog->owner = _strcpy(owner);

		return (dog);
	}
}
