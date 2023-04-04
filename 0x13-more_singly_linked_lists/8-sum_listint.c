#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: pointer to the first node in the list
 * @low_level_programming_language
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int addition = 0;

	while (head != NULL)
	{
		addition += head->n;
		head = head->next;
	}
	return (addition);
}

