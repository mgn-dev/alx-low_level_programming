#include <stddef.h>

/**
* int_index - function that searches for an integer.
* @array: array to search
* @size: number of elements in the array array
* @cmp: pointer to the function to be used to compare values
*
* Return: index of function.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}

		return (-1);
	}
}
