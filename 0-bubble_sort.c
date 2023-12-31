#include "sort.h"

/**
 * swap_ints - Swap 2 int in array.
 * @j: First int to swap.
 * @k: Second int to swap.
 */
void swap_ints(int *j, int *k)
{
	int tmp;

	tmp = *j;
	*j = *k;
	*k = tmp;
}

/**
 * bubble_sort - Sort integers in array in ascending order.
 * @array: Array of ints for sorting.
 * @size: Array size.
 *
 * Description: After the swaps the array is printed.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
