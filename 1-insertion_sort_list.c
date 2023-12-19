#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *pas, *in, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (pas = (*list)->next; pas != NULL; pas = tmp)
	{
		tmp = pas->next;
		in = pas->prev;
		while (in != NULL && pas->n < in->n)
		{
			swaplist(list, &in, pas);
			print_list((const listint_t *)*list);
		}
	}
}



void swaplist(listint_t **head, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
    {
        n2->next->prev = *n1;
    }
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
    {
        (*n1)->prev->next = n2;
    }
	else
    {
		*head = n2;
    }
	(*n1)->prev = n2;
	*n1 = n2->prev;
}
