#include "main.h"
/**
 * printrev_recursion - main function
 * @s: string to print
 *
 *
 * Description: print a string in reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
_putchar(*s);
}
