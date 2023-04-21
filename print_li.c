#include <stdio.h>
#include "sort.h"

/**
 * print_li - Prints a list of integers
 * @list: The list to be printed
 */
void print_li(const list_t *list)
{
	int n = 0;

	while (list)
	{
		if (n > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next_p;
	}
	printf("\n");
}
