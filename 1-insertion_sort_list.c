#include "sort.h"
/*
* insertion_sort_list - function that sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
* @list: doubly linked list of integers to be sorted.
* Return: void.
*/
void insertion_sort_list(listint_t **list)
{
	struct listint_t actual = list, auxprev, auxnext;

	while (actual->next != NULL)
	{
		if (actual->n > actual->next->n)
		{
			auxprev = actual->prev;
			auxnext = actual->next;
			actual->prev = actual->next;
			actual->next = actual->next->next;
			auxnext->prev = actual->auxprev;
			auxnext->next = actual;
            print_list(*list);
		}
		actual = auxnext;
	}
}
