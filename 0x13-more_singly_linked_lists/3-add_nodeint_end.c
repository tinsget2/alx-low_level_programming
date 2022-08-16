#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nelem;
	listint_t *temp;

	(void)temp;

	nelem = malloc(sizeof(listint_t));

	if (nelem == NULL)
		return (NULL);

	nelem->n = n;
	nelem->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = nelem;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nelem;
	}

	return (*head);
}
