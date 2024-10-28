#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Description: print numbers from 0 to 9 followed by a new line
 * Return: void
 */
void print_numbers(void)
{
int digit;

for (digit = '0'; digit <= '9'; digit++)
{
_putchar(digit);
}
_putchar('\n');
}
