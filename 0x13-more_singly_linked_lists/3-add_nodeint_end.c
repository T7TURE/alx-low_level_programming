#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 * @head: pointer to the start of the list
 * @n: element in the new node
 * Return: address of the new element
 *	NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}

