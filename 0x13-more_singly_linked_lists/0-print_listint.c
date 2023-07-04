#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the 1st node of linked list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodenumber = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodenumber++;
		h = h->next;
	}

	return (nodenumber);
}
