#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add new nodes at the begining
 * @head: first node
 * @str: string added
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *add, *tmp;
        unsigned int i = 0, count = 0;

        add = malloc(sizeof(list_t));
        if (add == NULL)
                return (NULL);
        add->str = strdup(str);
        for (i = 0; str[i] != '\0'; i++)
                count++;
        add->len = count;
        add->next = NULL;
        tmp = *head;

        if (tmp == NULL)
                *head = add;
        else
        {
                while (tmp->next != NULL)
                        tmp = tmp->next;
                tmp->next = add;
        }
        return (*head);
}
