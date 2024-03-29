#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 *
 * @array: The array to be sorted
 * @size: The size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index; /* where i, j are used as loops counters */
	int temp;

	for (i = 0; i < size - 1; i++) /* the outer loop for passes */
	{
		min_index = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		if (min_index != i) /* swapping occurs here */
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
