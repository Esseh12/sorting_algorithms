#include <stdio.h>
#include "sort.h"

/**
 * swap - swap the integer
 * @a: pointer to the first int
 * @b: pointer to the second int
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - partition the array
 * @array: Array to be partitioned
 * @low: starting index of the partision
 * @heigh: endidng index of the partition
 * @size: Size of the array
 * Return: index of the pivot element
 */

int partition(int *array, int low, int heigh, size_t size)
{
	int pivot = array[heigh];
	int i = low - 1;
	int j;

	for (j = low; j <= heigh - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if ((i + 1) != heigh)
	{
		swap(&array[i + 1], &array[heigh]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort_helper - Recursive helper function for qiuck sort
 * @array: array to be sorted
 * @low: staring index of the partition
 * @heigh: Ending index of partision
 * @size: size of he array
 */

void quick_sort_helper(int  *array, int low, int heigh, size_t size)
{
	int pi;

	if (low < heigh)
	{
		pi = partition(array, low, heigh, size);
		quick_sort_helper(array, low, pi - 1, size);
		quick_sort_helper(array, pi + 1, heigh, size);
	}
}

/**
 * quick_sort - Sort an array if integers in ascending
 * @array: array to ne sorted
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}
