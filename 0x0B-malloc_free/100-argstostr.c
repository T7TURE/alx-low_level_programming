#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str, *ptr;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		len++;
	}

	str = malloc(len * sizeof(char));


	if (str == NULL)
		return (NULL);

	ptr = str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*ptr++ = av[i][j];

		*ptr++ = '\n';
	}

	*ptr = '\0';


	return (str);
}

