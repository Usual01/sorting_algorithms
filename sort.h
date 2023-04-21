#ifndef PROTO_H
#define PROTO_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic the sort */
#define ZERO 0
#define ONE 1

/**
 * enum bool - Enumeration for the Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct list_s - a Doubly-linked list node
 *
 * @n: Integer element stored in the node
 * @prev_p: Pointer to the previous element of node
 * @next_p: Pointer to the next element of the node
 */
typedef struct list_s
{
	const int n;
	struct list_s *prev_p;
	struct list_s *next_p;
} list_t;

/* helper printing functions */
void print_arr(const int *arr, size_t size);
void print_li(const list_t *list_p);

/* Sorting algoritms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif 
