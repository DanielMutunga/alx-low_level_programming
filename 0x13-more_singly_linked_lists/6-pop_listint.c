#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the beginning of the list
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	head_node = *head;
	*head = head_node->next;
	n = head_node->n;
	free(head_node);
	return (n);
}
