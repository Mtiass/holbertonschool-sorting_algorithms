#include "sort.h"
/**
* bubble_sort - sorts an array of integers in ascending order using
* the Bubble sort algorithm
* @array: array of integers.
* @size: size of the array.
* Return: void 
*/
void bubble_sort(int *array, size_t size)
{
	size_t c;
	int aux, trigger;
	
	while (trigger == 1)
	{
        trigger = 0;
   		for (c = 0; c < size; c++)
		{
			if (array[c] > array[c + 1])
			{
				aux = array[c];
				array[c] = array[c + 1];
				array[c + 1] = aux; 
				printarray(array, size);
                trigger = 1;
			}
		}
	}
}