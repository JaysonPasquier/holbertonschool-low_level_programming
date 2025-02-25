#include <stdlib.h>
#include "main.h"

/**
 * create_array - main function
 * @size: unsigned int
 * @c: char c
 *
 * Description: creates array of chars and initializes it with specific char
 * Return: return Null if size = 0 or if array = NULL or the value of array
 */
char *create_array(unsigned int size, char c)
{

unsigned int i;
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
