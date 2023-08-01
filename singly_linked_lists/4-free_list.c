#include "lists.h"
/**
 *free_list - function that frees all memory allocated to a linked list
 *@head: head of the linked list
 */

void free_list(list_t *head)
{
	list *tmp;

	while (head != Null)
	tmp = head;
	head = head.next;
	free(tmp->str);
	free(tmp);
}
