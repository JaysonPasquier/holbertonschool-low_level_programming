#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints lowercase and uppercase alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphabet = 'z';

while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}

putchar('\n');

return (0);
}
