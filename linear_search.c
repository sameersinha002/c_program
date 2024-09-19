#include<stdio.h>

void main(){
  int a[5],i,search_key;
  int flag=0;
  printf("enter array of element\n");
  for ( i = 0; i < 5; i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter element to be searched:");
  scanf("%d",&search_key);

  for(i=0;i<5;i++){
    if(a[i]==search_key){
     flag=1;
     break;
    }
  }

  if (flag==1)
    printf("index=%d",i);
  else
  printf("Element not found in array");
  
}