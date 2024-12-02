#include "lists.h"
/**
 * list_len - find the lenght of a list
 * @h: head node
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

