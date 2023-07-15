#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (!list)
		return (NULL);

	current = prev = list;
	while (current->next && current->n < value)
	{
		prev = current;
		if (current->express)
		{
			current = current->express;
			printf("Value checked at index [%lu] = [%d]\n",
					current->index, current->n);
		}
		else
		{
			while (current->next)
				current = current->next;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next
	}

	return (NULL);
}
