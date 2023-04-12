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
		matrix = (int **)malloc(sizeof(int *) * height);

		if (matrix == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				matrix[i] = malloc(sizeof(int) * width);

				if (matrix[i] == NULL)
				{
					int l = i;

					for (i = 0; i < l; i++)
						free(matrix[i]);
					free(matrix);
					return (NULL);
				}
				else
				{
					for (j = 0; j < width; j++)
						matrix[i][j] = 0;
				}
			}
		}

		return (matrix);
	}
}
