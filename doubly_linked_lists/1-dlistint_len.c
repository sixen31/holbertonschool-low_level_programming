#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to head of the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
