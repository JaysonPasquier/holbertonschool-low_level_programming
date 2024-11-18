#include <stddef.h>

/**
 * array_iterator - main function
 * @array: int array
 * @size: size_t size
 * @action: void action
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
