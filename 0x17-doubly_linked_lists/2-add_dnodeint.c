#include "lists.h"
/**
 * add_dnodeint - add new node at the beginning of dlistint_t list
 *
 * @head: head of list
 * @n: value of the element
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	temp = *head;

	*head = new;
	new->next = temp;
	temp->prev = new;

	return (new);
}
