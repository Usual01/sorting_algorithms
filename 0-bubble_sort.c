#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

/**
 * swap_ints - This protype Swaps two integers in an array.
 * @a: The first integer .
 * @b: The second integer.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - This helps to sort an array of integers in the ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t n, length = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (n = 0; n < length - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				swap_ints(array + n, array + n + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		length--;
	}
}
