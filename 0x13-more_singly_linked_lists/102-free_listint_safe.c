#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp = *h, *temp2;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		count++;
		if (temp->next >= temp)
		{
			free(temp);
			break;
		}
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*h = NULL;
	return (count);
}
