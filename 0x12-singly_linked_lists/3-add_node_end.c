#include "lists.h"

/**
 * add_node_end - add tail node of the linked list
 *
 * @head: pointer to the head  node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	temp = *head;

	/*if temp is NULL place our new_node at the beginning of the list*/
	/*else if its not null we place our new_node to temp->next hence*/
	/*adding our new_node at the end of the list*/
	if (temp == NULL)
		*head = new_node;
	else
	{
		/**
		 * We iterate pointer next addr if it's not NULL our temp addr
		 * points to the next addr or the next node.
		 */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
