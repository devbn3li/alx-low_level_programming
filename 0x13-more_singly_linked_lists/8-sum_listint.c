#include "lists.h"
/**
 * sum_listint - calculates sum of all data in linked list
 * @head: pointer to first node in linked list
 * Return: sum of element data in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
