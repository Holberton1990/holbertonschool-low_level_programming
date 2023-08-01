#include "lists.h"
#include <stdio.h>

/**
 *dlistint_len - function that prints all elements
 *@h: header node
 *Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
