#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

int _putchar(char c);

void print_alphabet_x10(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
putchar(alphabet);

alphabet++;
}
putchar('\n');
}

#endif
