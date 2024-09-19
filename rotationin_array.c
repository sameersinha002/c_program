#include<stdio.h>
#include<math.h>
void rotaion(int arr[],int size,int x){

    for(int i=0;i<x;i++){
        int temp=arr[size-1];
        for(int j=size-1;j>0;j--){
             arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }

} 
int main(){
   int arr[20],n,x,start;
   printf("Enter number of element:\n");
   scanf("%d",&n);
   printf("Enter the elements of array:\n");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("No of position to rotate left to right \n");
   scanf("%d",&x);
   rotaion(arr,n,x);
  printf("rotated array is \n");
  for(int k=0;k<n;k++){
    printf("%d",arr[k]);
  }

   return 0;
}