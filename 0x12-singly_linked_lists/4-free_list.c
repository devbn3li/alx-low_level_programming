#include "lists.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to head node of the list
 *
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *current;

	/**
	 * while current head is not NULL
	 * set head as the next node and
	 * free the current node str then
	 * free current node
	 */
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
