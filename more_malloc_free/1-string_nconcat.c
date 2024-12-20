#include <stdlib.h>

/**
 * string_nconcat - main function
 * @s1: char s1
 * @s2: char s2
 * @n: unsigned int n
 *
 * Description: concatenates two strings
 * Return: result of NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i;
unsigned int j;
char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
