#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the beginning of a list
 * @head : the content of element
 * @str : chain of chara
 *
 * Return: node add end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *end = *head;
	char *cop = strdup(str);
	int i = 0;

	if (str == NULL || new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->str = cop;
	new->len = i;
	new->next = NULL;

	if (*head)
	{
		while (end->next != NULL)
			end = end->next;

	end->next = new;
	}
	else
		*head = new;
	return (new);
}
