#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 not 2 and 4
 *
 * Description: print numbers from 0 to 9 followed by a new line
 * Return: void
 */
void print_most_numbers(void)
{
int digit;

for (digit = '0'; digit <= '9'; digit++)
{
if (digit != '2' && digit != '4')
_putchar(digit);
}
_putchar('\n');
}
