#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void swap(int *a, int *b);
void insertion_sort_list(listint_t **list);
size_t tailleliste(const listint_t *h);
void swaplist(listint_t **h, listint_t **n1, listint_t *n2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int partition(int arr[],size_t size, int debut, int fin);
#endif
