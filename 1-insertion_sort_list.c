#include "sort.h"
/*
* insertion_sort_list - function that sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
* @list: doubly linked list of integers to be sorted.
* Return: void.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *change1, *change2, *afchange2, *bfchange1;

	change1 = *list;
	change2 = change1->next;
	afchange2 = change2->next;
	bfchange1 = change1->prev;
	
	if (list != NULL)
	{
		while (change1->next != NULL)
		{
			if (change1->n > change2->n)
			{ 	

				change2->prev = bfchange1;
				change2->next = change1;
				if (afchange2 != NULL)
					afchange2->prev = change1;
				change1->next = afchange2;
				change1->prev = change2;
				if (bfchange1 != NULL)
					bfchange1->next = change2;
				else
				{
					*list = change2;
				}
				change1 = *list;
				change2 = change1->next;
				afchange2 = change2->next;
				bfchange1 = change1->prev;
				print_list(*list);
			}
			else if (change1->next != NULL)
			{
				change1 = change1->next;
				if (change1->next != NULL)
				{
					change2 = change1->next;
					afchange2 = change2->next;
					bfchange1 = change1->prev;
				}
			}
		}
	}
}
