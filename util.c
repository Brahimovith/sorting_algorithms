#include "sort.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
   
}

size_t tailleliste(const listint_t *h)
{
    int c = 0;
    if(h == NULL)
    {
        return c;
    }
    while(h->prev != NULL)
    {
        h= h->prev;
    }
    while(h != NULL)
    {
        c++;
        h = h->next;
    }
    return c;
}
