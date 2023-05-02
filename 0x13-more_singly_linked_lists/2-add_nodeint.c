#include <lists.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node != NULL)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
		}
	}
	return (new_node);
}