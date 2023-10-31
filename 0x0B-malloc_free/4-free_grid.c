#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - function that frees a 2 dimensional
 *
 * @g: g
 * @h: h
 */
void free_grid(int **g, int h)
{
	int i;
	int j = 0;

	for (i = 0; i < h; i++)
	{
		while (g[i][j] != '\0')
		{
			free(g[i]);
			j++;
		}
		if (g[i][j] == '\0')
			free(g[i]);
	}
	free(g);
}
