#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of linked list
 * @head: pointer to first node in list
 * @n: data to insert the new node created
 * Return: pointer to the new node, NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
