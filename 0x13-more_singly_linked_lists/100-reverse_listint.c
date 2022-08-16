#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevLis;
	listint_t *nextLis;

	prevLis = NULL;
	nextLis = NULL;

	while (*head != NULL)
	{
		nextLis = (*head)->next;
		(*head)->next = prevLis;
		prevLis = *head;
		*head = nextLis;
	}

	*head = prevLis;
	return (*head);
}
