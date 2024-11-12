#include <stdlib.h>

/**
 * array_range - main function
 * @min: int min
 * @max: int max
 *
 * Description: creates an array of integers
 * Return: NULL or array
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
