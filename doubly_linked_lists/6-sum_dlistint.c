#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - add all value each node
 * @head : the content of element
 * Return: sum of all vallue
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
