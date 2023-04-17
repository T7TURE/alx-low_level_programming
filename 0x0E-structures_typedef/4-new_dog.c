#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int name_len, owner_len;

	/* Allocate memory for new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		printf("Error: Failed to allocate memory for new dog\n");
		exit(EXIT_FAILURE);
	}

	/* Allocate memory for new name */
	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;
	new_name = malloc((name_len + 1) * sizeof(char));
	if (new_name == NULL)
	{
		printf("Error: Failed to allocate memory for new name\n");
		free(new_dog);
		exit(EXIT_FAILURE);
	}

	/* Allocate memory for new owner */
	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;
	new_owner = malloc((owner_len + 1) * sizeof(char));
	if (new_owner == NULL)
	{
		printf("Error: Failed to allocate memory for new owner\n");
		free(new_name);
		free(new_dog);
		exit(EXIT_FAILURE);
	}

	/* Copy name and owner to new strings */
	for (int i = 0; i <= name_len; i++)
		new_name[i] = name[i];
	for (int i = 0; i <= owner_len; i++)
		new_owner[i] = owner[i];

	/* Assign new strings to new dog */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}

