#include<stdio.h>
int peak(int arr[],int size){
  int start=0,end=size-1;
   while (start<=end)
   {
    long mid=(start+end)/2;
    if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
    {
        return arr[mid];
    }
    else if(arr[mid]>arr[mid-1])
    start=mid+1;
    else
    end=mid;
   }
   return -1;
}
int main(){
  int peak(int arr[],int size);
  int arr[5],i,x;
   int end=5;
   printf("Enter elements in array:\n");
   for ( i = 0; i < end; i++)
   scanf("%d",&arr[i]);
   x=peak(arr,5);
   printf("Peak element index is: %d",x);

return 0;
   
}