#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to print
 *
 * Descritpion: Print a string in reverse.
 * Return: Void
 */
void print_rev(char *s)
{
int length = 0;
int i;

while (s[length] != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
