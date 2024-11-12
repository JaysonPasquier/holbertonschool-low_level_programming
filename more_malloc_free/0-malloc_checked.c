#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main function
 * @b: unsigned int b
 *
 * Description: allocates memory using malloc
 * Return: return 98 or pointer t othe allocated memory
 */

void *malloc_checked(unsigned int b)
{

void *ptr = malloc(b);

if (ptr == NULL)
exit (98);

return (ptr);

}