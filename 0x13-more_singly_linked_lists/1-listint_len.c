#include "lists.h"
/**
 * listint_len - returns number elements in a linked lists
 * @h: pointer to the 1st node of linked list
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodenumb = 0;

	while (h)
	{
		nodenumb++;
		h = h->next;
	}
	return (nodenumb);
}
