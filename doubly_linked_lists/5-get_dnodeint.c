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
    unsigned int i;
    dlistint_t *it = head;

    // Kontrolli për rastin e listës bosh
    if (head == NULL)
        return NULL;

    // Loop-i për të gjetur nyjen në indeksin e dhënë
    for (i = 0; i < index; i++)
    {
        // Kontrolli për rastin kur jemi jashtë kufijve të listës
        if (it == NULL)
            return NULL;

        // Zhvendosemi te nyja tjetër
        it = it->next;
    }

    // Kthejmë nyjen në indeksin e caktuar
    return it;
}

