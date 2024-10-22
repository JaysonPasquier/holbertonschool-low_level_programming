#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Descritpion : Prints lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
const char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";

while (*alphabet)
{
_putchar(*alphabet++);
}
}


/**
 * main - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

int main(void)
{
print_alphabet();
return (0);
}
