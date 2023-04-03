#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring.
 *
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
        size_t haystack_len = strlen(haystack);
        size_t needle_len = strlen(needle);
        size_t i;

        for (i = 0; i <= haystack_len - needle_len; i++)
        {
                if (strncmp(&haystack[i], needle, needle_len) == 0)
                {
                        return (&haystack[i]);
                }
        }

        return (NULL);
}

