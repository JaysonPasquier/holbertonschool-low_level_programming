#include <stdio.h>
#include "main.h"

/**
 * print_line - print _ numbre time for n
 * @n: the number for n
 *
 * Return: void
 */

void print_line(int n)
{
int i;

if (n <= 0)
_putchar('\n');

for (i = 0; i < n; i++)
{
_putchar('_');
}
if (n > 0)
_putchar('\n');
}
