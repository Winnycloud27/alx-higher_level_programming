#include "lists.h"

/**
* check_cycle - checks if a singly linked list
* has a cycle in it
*
* @list: pointer to the head of the list
*
* Return: 0 if there is no cycle, 1 if there is a cycle
*/

int check_cycle(listint_t *list)
{
	listint_t *snail = list;
	listint_t *cheetah = list;

	while (cheetah && cheetah->next)
	{
		snail = snail->next;
		cheetah = cheetah->next->next;

		if (snail == cheetah)
		{
			snail = list;
			while (snail != cheetah)
			{
				snail = snail->next;
				cheetah = cheetah->next;
			}
			return (1);
		}
	}

	return (0);
}
