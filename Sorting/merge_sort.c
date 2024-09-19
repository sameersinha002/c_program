#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{
    int left = start;
    int right = mid + 1;
    int index = 0;
    int temp[end - start + 1];
    while (left <= mid && right <= end)
    {
        if (arr[left] > arr[right])
        {
            temp[index++] = arr[right++];
        }
        else
            temp[index++] = arr[left++];
    }
    while (left <= mid)
    {
        temp[index++] = arr[left++];
    }
    while (right <= end)
    {
        temp[index++] = arr[right++];
    }
    index = 0;
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[index++];
    }
}
void mergesort(int arr[], int start, int end)
{
    if (start == end)
        return;

    int mid = start + (end - start) / 2;

    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

void main()
{
    int arr[] = {10, 8,9, 4, 6, 3, 7, 5,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n - 1);
    for (int j = 0; j < n; j++)
    {
        printf("%d  ", arr[j]);
    }
}