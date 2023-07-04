#include "lists.h"
/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to first node linked list
 * Return: the data inside the elements that was deleted,
 * 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
