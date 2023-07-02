#include "lists.h"
/**
 * list_len - number of nodes
 *
 * @h: pointer to the head
 *
 * Return: num  node
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	/*if head is null return 0 nodes*/
	if (h == NULL)
		return (0);

	/*iterate through the nodes*/
	while (h->next != NULL)
	{
		/*go to the next node*/
		h = h->next;
		/*count node*/
		node_count++;
	}

	return (node_count);
}
