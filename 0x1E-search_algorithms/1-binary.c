#include "search_algos.h"
#include <math.h>

/**
 * print_array - print the array that's currently searched.
 * @array: pointer to the first element of the array to search in.
 * @l: lower index to array.
 * @r: upper index to array.
 *
*/
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");

	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}

	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers
 * using the Linear search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: return the first index where value is located, otherwise -1.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t mid, l = 0, r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);

		mid = (size_t)floor((double)(l + r) / 2.0);

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
