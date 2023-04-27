#include "lists.h"


/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	if (!head || !str)
		return (NULL);

	/* Allocate memory for new node */

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	/* Calculate length of string */
	size_t len = 0;

	while (str[len])
		len++;

	/* Set fields of new node */
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;

	/* Set head to point to new node */
	*head = new_node;

	/* Return address of new node */
	return (new_node);
}

