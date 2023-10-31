#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 *
 * @w: w
 *
 * @h: h
 *
 * Return: return
 */

int **alloc_grid(int w, int h)
{
	int **a, i, j;

	if (w <= 0 || h <= 0)
	{
		return (NULL);
	}

	a = (int **)malloc(h * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < h; i++)
	{

		a[i] = (int *)malloc(w * sizeof(int));

		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < w; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);

}
