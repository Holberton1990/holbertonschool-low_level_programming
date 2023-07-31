#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements
 *@h: header node
 *Return: number of nodes
 */
//si punon ne AArray
//set count to zero
//iterate count to zero
//printelement
//increment count by 1
//return count
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
	}

	return (n);
}
