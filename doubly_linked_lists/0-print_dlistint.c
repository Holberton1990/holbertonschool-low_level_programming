#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - the print dlistint_t function
 * node_count the head pointer of the dlistint_t doubly linked list as input and iterates through the list while printing the n value of each node.
 * Return: node_count.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	node_count++;
	}
return node_count;
}
