#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to first node
 * @n: integer to add to new node
 *
 * Return: address of new element, or Null on faiulure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
