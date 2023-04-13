#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatanetes two strings
 * @s1: - string 1
 * @s2: - string 2
 * @n: number of bytes
 * Return: Null if fail
 * Pointer to new space containing s1 and 1st n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int len = n, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (y = 0; s1[y]; y++)
		len++;

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	len = 0;

	for (y = 0; s1[y]; y++)
		string[len++] = s1[y];

	for (y = 0; s2[y] && y < n; y++)
		string[len++] = s2[y];

	string[len] = '\0';

	return (string);
}

