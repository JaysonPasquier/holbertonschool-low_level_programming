#include "main.h"
#include "stdio.h"

/**
 * _memcpy - the main function
 * @dest: char s
 * @src: char b
 * @n: unsigned int n
 *
 * Description: copies n bytes from memory area src to memory area dest
 * Return: return dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
