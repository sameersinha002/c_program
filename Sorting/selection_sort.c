#include<stdio.h>
int main(){
    int arr[10],n, num,temp;
     printf("Enter the number of element\n");
     scanf("%d",&n);
     printf("Enter Array elements\n");
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
     }
    printf("Sorted Array are:  ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

     return 0;
}