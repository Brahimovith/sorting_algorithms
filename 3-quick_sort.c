
#include "sort.h"

int partition(int arr[],size_t size, int debut, int fin)
{
	int j;
	int pivot = arr[fin];
	int i = debut - 1;
	for(j = debut; j <= fin; j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			swap(&arr[j], &arr[i]);
			if(i != j)
			{
				print_array(arr,size);
			}
		}
	}
	swap(&arr[fin], &arr[i + 1]);
	print_array(arr,size);
	return (i + 1);

}

void quick_sort(int *array, size_t size)
{
	if(size > 1)
	{
		int pivot = partition(array,size,0, size-1);
		quick_sort(array,pivot);
		quick_sort(array+pivot+1, size-pivot-1);
	}
}
