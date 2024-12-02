#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: the head of the list
 * Return: NULL if error
 */

void free_list(list_t *head)
{
	list_t *add;

	while (head)
	{
		add = head->next;
		free(head->str);
		free(head);

		head = add;
	}
}
