#include <stddef.h>
#include <stdlib.h>

/**
* *create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: size of array.
* @c: char to inititalize array.
*
* Return: pointer to new array.
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = (char *)malloc(sizeof(char) * size);

		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			unsigned int i = 0;

			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}

			return (arr);
		}
	}
}
