#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    if (h == NULL)
        return (0);

    while (h != NULL)
    {
        printf("%d\n", h->n);

        count++;
        h = h->next;
    }

    return (count);
}
