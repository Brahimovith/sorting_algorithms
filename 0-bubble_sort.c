#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i = 0, j = 0;

    if(size < 2)
    {
        return;
    }
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);
                print_array(array, size);
            }
        }
        
    }
}
