#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements
 *@h: header node
 *Return: number of nodes
 */
size_t print_list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}

	return (count);
}
