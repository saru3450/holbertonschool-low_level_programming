#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint -  returns the sum of all the data (n)
 * @head: list of the head
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->prev;
		}
	}

	return (sum);
}
