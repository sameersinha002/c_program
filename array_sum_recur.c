#include<stdio.h>
int sum(int arr[],int x,int y){
    if(x==0)
    return 0;
    else if(x==1)
    return arr[0]+y;
    else
    sum(arr+1,x-1,arr[0]+y);
}

int main(){
    int n,arr[10],z;
    printf("Enter the no of elements:\n");
    scanf("%d",&n);
    printf("Enter the array element\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    z=sum(arr,5,0);
    printf("Result is : %d",z);
    return 0 ;
}