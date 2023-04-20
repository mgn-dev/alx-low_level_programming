#include <stddef.h>

/**
* array_iterator - function that executes a function given as
* a parameter on each element of an array.
* @array: array to evaluate.
* @size: size of array.
* @action: pointer to a function to use to evaluate array.
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
