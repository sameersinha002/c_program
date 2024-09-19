#include<stdio.h>
int issorted(int arr[],int x){
    if(x==1||x==0)
    return 1;
    if(arr[x-1]<arr[x-2])
    return 0;
    else
    return issorted(arr,x-1);
}
int main(){
int arr[20],n,x;
printf("Enter number of element in array:\n");
scanf("%d",&n);
printf("Enter elements in array:\n");
for (int i = 0; i < n; i++)
{
   scanf("%d",&arr[i]);
}
x=issorted(arr,n);
if(x==1)
printf("Array is sorted");
else
printf("Array not is sorted");
return 0;
}