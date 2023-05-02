#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to head of linked list.
 * Return: pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (!next)
			break;
		*head = next;
	}
	return (*head);
}
