#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of ints
 *
 * @width: widht of the array
 * @height: height of the array
 *
 * Return: return a pointer to 2d array or NULL if is cero, less or fail
 */
int **alloc_grid(int width, int height)
{
	int **ptr2d;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr2d = malloc(height * sizeof(int *));
	if (ptr2d != '\0')
	{
		for (h = 0; h < height; h++)
		{
			ptr2d[h] = malloc(width * sizeof(int));
			if (ptr2d[h] == '\0')
			{
				for (; h >= 0; h--)
					free(ptr2d[h]);
				free(ptr2d);
				return ('\0');
			}
		}
		for (h = 0; h < height; h++)
		{
			for (w = 0; w < width; w++)
			{
				ptr2d[h][w] = 0;
			}
		}
		return (ptr2d);
	}
	return ('\0');
}
