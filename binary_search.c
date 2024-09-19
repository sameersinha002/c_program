#include<stdio.h>

void main(){
  int a[5],key,i;
  int start=0,end=5;
   printf("Enter elements in array:\n");
   for ( i = 0; i < end; i++)
   scanf("%d",&a[i]);
   printf("Enter key to be searched:");
   scanf("%d",&key);

   while (start<=end)
   {
    long mid=(start+end)/2;
    if (a[mid]==key){
        printf("index is: %d",mid);
        break;
    }
    else if(a[mid]<key)
    start=mid+1;
    else
    end=mid-1;
   }

}