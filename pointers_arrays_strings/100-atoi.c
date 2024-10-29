#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int digit;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (result > (INT_MAX - digit) / 10)
return (sign == 1 ? INT_MAX : INT_MIN);

result = result * 10 + digit;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}
i++;
}

return (result * sign);
}
