
#include <stdlib.h>
#include <stddef.h>

/**
* *array_range - function that creates an array of integers.
* @min: lowest value in array.
* @max: highest value in array.
*
* Return: the pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}
	else
	{
		int *arr = malloc(sizeof(*arr) * ((max - min) + 1));

		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			int i;

			for (i = 0; i < ((max - min) + 1); i++)
				arr[i] = min + i;

			return (arr);
		}
	}
}
