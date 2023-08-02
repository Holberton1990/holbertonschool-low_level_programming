#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: first node
 * @index: place of the new node
 * Return: the nth node, or NULL
 */
int sum_dlistint(dlistint_t *head)
{
	
        int sum = 0;
        
	if (head == NULL)
		return (0);

	while(head)
	{
		sum += head->n;
		head = head->next;
}
	return(sum);
}
