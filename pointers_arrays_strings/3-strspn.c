#include "main.h"
#include "stdio.h"

/**
 * _strspn - the main function
 * @i: int i
 * @j: int j
 * @found: int found
 * @count: unsigned int count
 *
 * Description: gets the length of a prefix substring
 * Return: return count
 */



unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j;
int found;

for (i = 0; s[i]; i++)
{
found = 0;
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (found == 0)
break;
count++;
}
return (count);
}
