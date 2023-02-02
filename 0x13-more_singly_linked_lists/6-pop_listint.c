#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *	and returns the head node’s data (n)
 * @head: pointer to first node
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	first_node = temp->n;

	free(temp);

	*head = next;

	return (first_node);
}
