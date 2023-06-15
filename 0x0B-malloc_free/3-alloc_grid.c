# include <stdlib.h>
# include "main.h"

/**
* alloc_grid - function that returns a pointer to a
* 2 dimensional array of integers.
* @width: width of array.
* @height: height of array.
* Return: a pointer to a 2 dimensional array of integers or
* return NULL if width or height is 0 or negative.
*/

int **alloc_grid(int width, int height)
{
int i, j, a;
int **p_pArr = malloc(sizeof(int *) * height);

if (width <= 0 || height <= 0)
return (NULL);

if (p_pArr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
p_pArr[i] = malloc(sizeof(int) * width);
for (j = 0; j < width; j++)
{
p_pArr[i][j] = 0;
}
}

return (p_pArr);

while (i >= 0)
{
free(p_pArr[i]);
i--;
}
free(p_pArr);
return (NULL);
}
