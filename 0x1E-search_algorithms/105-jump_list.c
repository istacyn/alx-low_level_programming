#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *prev;
	size_t jump, step;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	current = list;
	while (current->index < size && current->n < value)
	{
		prev = current;
		step = jump;
		while (step > 0 && current->next != NULL && current->n < value)
		{
			prev = current;
			current = current->next;
			step--;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev->index < size && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
