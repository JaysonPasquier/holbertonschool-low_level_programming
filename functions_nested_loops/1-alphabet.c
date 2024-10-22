#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */


void print_alphabet(void)
{
const char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";

while (*alphabet)
{
_putchar(*alphabet++);
}
}
