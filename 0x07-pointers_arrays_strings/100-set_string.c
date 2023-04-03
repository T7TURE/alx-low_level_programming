#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: a pointer to a pointer to a char.
 * @to: a pointer to a char.
 *
 * Return: nothing.
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; *(to + i); i++)
		*((*s) + i) = *(to + i);
	*((*s) + i) = '\0';

}

