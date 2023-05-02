#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head;

	if (head == NULL)
		exit(98);
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		if (temp->next >= temp)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			break;
		}
		temp = temp->next;
	}
	return (count);
}
