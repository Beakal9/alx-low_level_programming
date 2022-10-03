#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a matrix using malloc
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: return a pointer of pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
		array = (int **) malloc(sizeof(int *) * height);
		if (array != NULL)
		{
			for (; i < height; i++)
			{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
			}
			return (array);
		}
		else
		{
			retuen (NULL);
		}
}
