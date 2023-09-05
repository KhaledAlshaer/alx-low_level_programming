#include "main.h"

/**
 *free_grid - This is the function
 *@grid: this is a variable
 *@height: this is a variable
 *Return: returns 0
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
