#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pre2;
	listint_t *prev;

	pre2 = head;
	prev = head;
	while (head && pre2 && pre2->next)
	{
		head = head->next;
		pre2 = pre2->next->next;

		if (head == pre2)
		{
			head = prev;
			prev =  pre2;
			while (1)
			{
				pre2 = prev;
				while (pre2->next != head && pre2->next != prev)
				{
					pre2 = pre2->next;
				}
				if (pre2->next == head)
					break;

				head = head->next;
			}
			return (pre2->next);
		}
	}

	return (NULL);
}
