#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the list.
 * @n: integer to add to the list.
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL, *last_node = NULL;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node != NULL)
		{
			new_node->n = n;
			new_node->next = NULL;
			if (*head == NULL)
				*head = new_node;
			else
			{
				last_node = *head;
				while (last_node->next != NULL)
					last_node = last_node->next;
				last_node->next = new_node;
			}
		}
	}
	return (new_node);
}
