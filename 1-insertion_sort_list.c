#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using Insertion sort algorithm
 * @list: Pointer to pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev, *next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr != NULL)
	{
		next = curr->next;
		prev = curr->prev;

		while (prev != NULL && prev->n > curr->n)
		{
			prev->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = prev;
			curr->next = prev;
			curr->prev = prev->prev;
			if (prev->prev != NULL)
				prev->prev->next = curr;
			prev->prev = curr;
			if (curr->prev == NULL)
				*list = curr;
			print_list(*list);
			prev = curr->prev;
		}
		curr = next;
	}
}
