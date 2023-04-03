#include "main.h"
#include <string.h>

/**
 * _strstr - Finds the first occurrence of the substring needle in the
 *            string haystack.
 *
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	size_t haystack_len = strlen(haystack);
	size_t needle_len = strlen(needle);

	if (!needle_len)
		return (haystack);

	for (size_t i = 0; i <= haystack_len - needle_len; i++) {
		if (strncmp(&haystack[i], needle, needle_len) == 0)
			return (&haystack[i]);
	}

	return (NULL);
}


