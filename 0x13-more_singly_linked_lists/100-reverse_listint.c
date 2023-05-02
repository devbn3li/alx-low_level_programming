#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 *                           linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head)
{
	listint_t *current, *next;

	if (!head || !*head)
		return (-1);
	current = *head;
	next = current->next;
	free(current);
	*head = next;
	return (1);
}
