#include "sort.h"
/*
* lomuto - divides an array in two different parts,
* leaving the values lower than pivot on the left,
* and the values higher than pivot on the right.
* Pivot is equal the last position in the array.
* @array: array to be sorted.
* @start: start of the array.
* @end: end of the array.
* @size: size of the array.
* Return: void.
*/
int lomuto(int *array, int start, int end, size_t size)
{
	int temp, count, count2 = 0, pivot = end;

	for (count = start; count < end - 1; count++)
	{
		if (array[count] < array[end])
		{
			if (count != count2)
			{
				temp = array[count];
				array[count] = array[count2];
				array[count2] = temp;
				print_array(array, size);
			}
            count2++;
		}
	}
	if (count2 != pivot)
	{
		temp = array[count2];
		array[count2] = array[pivot];
		array[pivot] = temp;
		print_array(array, size);
        pivot = count2;
	}
	return(pivot);
}
/*
* quick_sort - sorts an array of integers in ascending order
* using the Quick sort algorithm.
* @array: array to be sorted.
* @size: size of the array.
* Return: void.
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	recursive_sort(array, 0, size - 1, size);
}
/*
* recursive_sort - function to sort an array recursively.
* @array: array to be sorted.
* @start: start of the array.
* @end: end of the array.
* @size: size of the array.
* Return: void.
*/
void recursive_sort(int *array, int start, int end, size_t size)
{
	if (end > start)
	{
	int pivot = lomuto(array, start, end, size);
	recursive_sort(array, start, pivot - 1, size);
	recursive_sort(array, pivot + 1, end, size);
	}
}
