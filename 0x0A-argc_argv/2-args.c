#include <stdio.h>

/**
 * main - prints all arguments it receives to main
 * @argc: command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}


