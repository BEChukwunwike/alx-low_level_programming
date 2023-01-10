#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width oàf array
 * @height: height of array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **pptr;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	pptr = malloc(sizeof(int *) * height);

	if (pptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pptr[i] = malloc(sizeof(int) * width);

		if (pptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(pptr[i]);

			free(pptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
			pptr[i][n] = 0;
	}
	return (pptr);
}
