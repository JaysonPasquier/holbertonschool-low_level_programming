#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: Void
 */
void puts_half(char *str)
{
int length = 0;
int i, n;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length - 1) / 2 + 1;
}
for (i = n; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
