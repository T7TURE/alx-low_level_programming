#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;
	
	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

