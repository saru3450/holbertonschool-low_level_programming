#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @index: index of the node that should be deleted
 * @head: the head of list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hdr;
	dlistint_t *hdo;
	unsigned int i;

	hdr = *head;

	if (hdr != NULL)
		while (hdr->prev != NULL)
			hdr = hdr->prev;

	i = 0;

	while (hdr != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = hdr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hdo->next = hdr->next;

				if (hdr->next != NULL)
					hdr->next->prev = hdo;
			}

			free(hdr);
			return (1);
		}
		hdo = hdr;
		hdr = hdr->next;
		i++;
	}

	return (-1);
}
