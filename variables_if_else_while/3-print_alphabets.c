#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints lowercase and uppercase alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphabet = 'a';
char alphabet2 = 'A';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}

while (alphabet2 <= 'Z')
{
putchar(alphabet2);
alphabet2++;
}

putchar('\n');

return (0);
}
