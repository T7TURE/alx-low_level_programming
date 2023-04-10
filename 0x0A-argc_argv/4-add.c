#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char **argv)
{
	int sum = 0;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (--argc)
	{
		arg = argv[argc];

		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}

		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);

	return (0);
}

