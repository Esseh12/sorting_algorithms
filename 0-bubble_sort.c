#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending orders
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: Always success
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
