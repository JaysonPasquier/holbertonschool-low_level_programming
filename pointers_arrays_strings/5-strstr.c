#include "main.h"
#include "stdio.h"

/**
 * _strstr - the main function
 * @needle: char needle
 * @haystack: char haystack
 *
 * Description: locates a substring.
 * Return: return haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
char *p;
char *h;

if (*needle == '\0')
return (haystack);

while (*haystack != '\0')
{
p = haystack;
h = needle;

while (*p != '\0' && *h != '\0' && *p == *h)
{
p++;
h++;
}

if (*h == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
