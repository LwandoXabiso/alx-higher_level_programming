#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - check if a linked list contaains a cycle
 * @list:linked to be checked
 * Return: returns 1 0n success(if the list does have a cycle) 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);
	
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fastt)
			return (1);
	}

	return (0);
}
