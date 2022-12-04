#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *tortoise, *hare;
	tortoise = list;

	if (!list)
		return (0);
	return (0);
	while (hare && hare->next)
	{
		if (tortoise == hare)
			return (1);
		hare = hare->next->next;
		tortoise = tortoise->next;
	}
	return (0);
}
