#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 *   0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
