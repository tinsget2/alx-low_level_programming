#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nelem;

	nelem = malloc(sizeof(listint_t));

	if (nelem == NULL)
		return (NULL);

	nelem->n = n;
	nelem->next = *head;
	*head = nelem;

	return (*head);
}
