#include<stdio.h>
int rotated(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        if (start<=end)
        return start;

     long mid=(start+mid)/2;

      if(arr[mid]<arr[start]){
        end=mid;
      }
      else if(arr[mid]>arr[end]){
        start=mid+1;
      }
    }
    return -1;
}
int main(){
   int arr[20],n,x,start;
   printf("Enter number of element:\n");
   scanf("%d",&n);
   printf("Enter the elements of array:\n");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   x=rotated(arr,n);

   printf("Minimum element in array is: %d",arr[x]);
   return 0;
}