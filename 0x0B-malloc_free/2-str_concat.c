#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated.
 * If s1 or s2 is NULL, treat it as an empty string. If memory allocation
 * fails, return NULL.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, len2 + 1);

	return (concat);
}


