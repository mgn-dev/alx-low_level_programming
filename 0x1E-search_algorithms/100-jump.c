#include "search_algos.h"
#include <math.h>

/**
 * min - function that finds the minimum of two integer values.
 * @a: first value to compare.
 * @b: second value to compare.
 *
 * Return: minimum of two integer values.
*/
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - searches for a value in an array of integers
 * using the jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: return the first index where value is located, otherwise -1.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = sqrt(size);
	size_t c = min(b, size) - 1;

	if (array == NULL)
		return (-1);

	while (array[c] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", c, array[c]);
		a = b;
		b = b + floor(sqrt(size));
		if (a >= size)
		{
			return (-1);
		}
		c = min(b, size) - 1;
	}

	while (array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = a + 1;
		if (a == min(b, size))
		{
			return (-1);
		}
	}

	if (array[a] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		return (a);
	}
	else
	{
		return (-1);
	}

	return (-1);
}
