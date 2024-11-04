#include "main.h"
#include "stdio.h"

/**
 * _strpbrk - the main function
 * @s: char s
 * @accept: char accept
 *
 * Description: searches a string for any of a set of bytes.
 * Return: return null or s + i
 */

char *_strpbrk(char *s, char *accept)
{
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
