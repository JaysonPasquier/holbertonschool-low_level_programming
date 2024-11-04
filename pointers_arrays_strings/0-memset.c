#include "main.h"
#include "stdio.h"

/**
 * _memset - the main function
 * @s: char s
 * @b: char b
 * @n: unsigned int n
 *
 * Description: fills memory with a constant byte
 * Return: return s
 */


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
