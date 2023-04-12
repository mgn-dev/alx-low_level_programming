#include <stdlib.h>
#include <stddef.h>

/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: 1st dimension.
* @height: 2nd dimension.
*
* Return: the matrix.
*/
int **alloc_grid(int width, int height)
{
	int **matrix = NULL;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	else
	{
		matrix = (int **)malloc(sizeof(int **) * height);

		if (matrix != NULL)
		{
			for (i = 0; i < height; i++)
			{
				matrix[i] = (int *)malloc(sizeof(int *) * width);

				if (matrix[i] == NULL)
				{
					free(matrix);
					return (NULL);
				}
			}
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				matrix[i][j] = 0;
			}
		}

		return (matrix);
	}
}
