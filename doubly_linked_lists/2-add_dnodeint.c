#include "lists.h"
#include <stdio.h>

/**
 *dlistint_len - function that prints all elements
 *@h: header node
 *Return: the number of elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t
		 if (new_node == NULL) {
        
        return NULL;
    }

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL) {
        (*head)->prev = new_node;
    }

    *head = new_node;
    return new_node;
}

