#include<stdio.h>
void insertionsort(int arr[],int x){
    int key,j;
    for (int i =1 ; i < x; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int arr[10], n;
    printf("Enter the number of element\n");
    scanf("%d", &n);
    printf("Enter Array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertionsort(arr,n);
    printf("Sorted Array are:  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}