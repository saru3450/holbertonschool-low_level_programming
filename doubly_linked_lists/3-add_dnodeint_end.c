#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Value of the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		/* Traverse to the end of the list */
		while (h->next != NULL)
			h = h->next;

		h->next = new;   /* Add new node to the end */
		new->prev = h;   /* Link back to the previous node */
	}
	else
	{
		*head = new;      /* If list is empty, new node becomes the head */
		new->prev = NULL; /* First node has no previous node */
	}

	return (new);
}

