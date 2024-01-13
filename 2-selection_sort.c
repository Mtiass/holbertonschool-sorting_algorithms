#include "sort.h"
/**
* selection_sort - sorts an array of integers in ascending order using the
* Selection sort algorithm.
* @array: array of integers to be sorted.
* @size: size of the array.
* Return: void.
*/
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t counter, con2, minin;

	if (array == NULL || size <= 1)
		return;
	for (counter = 0; counter < size - 1; counter++)
	{
		minin = counter;
		for (con2 = counter + 1; con2 < size; con2++)
		{
			if (array[con2] < array[minin])
				minin = con2;
		}

		if (minin != counter)
		{
			temp = array[counter];
			array[counter] = array[minin];
			array[minin] = temp;
			print_array(array, size);
		}
	}
}
