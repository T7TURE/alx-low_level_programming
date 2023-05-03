#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to start of list
 * @n: elements in the list
 * Return: NULL if failed
 *	address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
