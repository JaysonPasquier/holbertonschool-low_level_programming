#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 *
 * Description: print numbers from 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
int i;
int digit;

for (i = 0; i < 10; i++)
{
for (digit = 0; digit <= 14; digit++)
{
if (digit > 9)
_putchar((digit / 10) + '0');
_putchar((digit % 10) + '0');
}
_putchar('\n');
}
}
