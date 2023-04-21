#include <stdlib.h>
#include <stdio.h>

/**
 * print_arr - Prints an array of integers numbers
 * @array: The array of values to be printed
 * @size:The Number of elements in array
 */
void print_arr(const int *arr, size_t size)
{
	size_t n;

	n = 0;
	while (arr && n < size)
	{
		if (n > 0)
			printf(", ");
		printf("%d", arr[n]);
		++n;
	}
	printf("\n");
}
