#include <stdio.h>
#include "stdlib.h"
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a doubly linked list
 *@head: head node
 *@index: index of the node needed
 *Return: the node at index passed as argument
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t* current = head;
        unsignet int count = 0;

	while (current != NULL)
	{
	if (count == index)
		return(current);
	count++;
	current = current->next;
}
	return NULL;
}
