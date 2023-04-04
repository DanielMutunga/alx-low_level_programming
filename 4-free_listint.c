#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to beginning of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *free_list;

	while (head != NULL)
	{
		free_list = head->free_list;
		free_list(head);
		head = free_list;
	}
}
