#include<stdio.h>
void swap(int *x,int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
void quicksort(int arr[],int start,int end){
    int p=start;
    int l=p,r=end;
    if(start>=end){
      return;
    }
    while(l<r){
      if(p==l){
        if(arr[p]>arr[r]){
          swap(&arr[p],&arr[r]);
          p=r;
          l++;
         }
        else r--;
      }
      if(p==r){
        if(arr[p]<arr[l]){
          swap(&arr[p],&arr[l]);
          p=l;
          r--;
          }
          else l++;
      }
    }
   quicksort(arr,start,p-1); //left recursive call part from sorted pivot element
   quicksort(arr,p+1,end); //right part recursive call from sorted pivot element
}
void main(){
      int arr[]={6,15,7,3,8,12,5,25,2};
      int n=sizeof(arr)/sizeof(arr[0]);
   quicksort(arr,0,n-1);

   for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
   }
}