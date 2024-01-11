#include "sort.h"
/*
* insertion_sort_list - function that sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
* @list: doubly linked list of integers to be sorted.
* Return: void.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *actual, *auxprev, *auxnext;

    actual = *list;
    auxnext = actual->next;
	while (actual->next != NULL)
	{
		if (actual->n > actual->next->n)
		{   
            auxnext = actual->next;
			auxprev = actual->prev;
			actual->prev = actual->next;
			actual->next = actual->next->next;
			auxnext->prev = auxprev;
			auxnext->next = actual;
            print_list(*list);
		}
		actual = auxnext;
	}
}
