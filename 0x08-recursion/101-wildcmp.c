#include "main.h"


/**
 * wildcmp - compares two strings with wildcard support
 * @s1: first string to compare
 * @s2: second string to compare, with wildcards
 *
 * Description: This function compares two strings s1 and s2. The second
 * string may contain the wildcard character '*', which can match any
 * sequence of characters (including an empty sequence). Returns 1 if the
 * strings can be considered identical, 0 otherwise.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return 1;

    
	if (*s1 == *s2 || (*s2 == '*' && *s1 != '\0'))
		return wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1);

    
	if (*s2 == '*')
			return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);

     return (0);
}

