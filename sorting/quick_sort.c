#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int i = (low - 1);
    int pivot = arr[high];

    for(int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(int arr[], int low, int high)
{
	if(low < high)
	{
		int partition_index = partition (arr, low, high);
		quick_sort(arr, low, partition_index - 1);
		quick_sort(arr, partition_index + 1, high);
	}
}

void print_arr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[] = {9, 6, 10, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, size - 1);
    print_arr(arr, size);
    return 0;
}
