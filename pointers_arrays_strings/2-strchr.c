#include "main.h"
#include "stdio.h"

/**
 * _strchr - the main function
 * @s: char s
 * @c: char c
 *
 * Description: locate a character in a string
 * Return: return null or c
 */


char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}