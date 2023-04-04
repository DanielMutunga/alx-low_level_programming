#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t j;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
i		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		newlist[j] = list[j];
	newlist[j] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the sum of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t k, sum = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (k = 0; k < sum; k++)
		{
			if (head == list[k])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (sum);
			}
		}
		sum++;
		list = _r(list, sum, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (sum);
}
