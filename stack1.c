#include<stdio.h>
#include<string.h>
int top=-1;
char arr[30];

void push(int data){
if(top==sizeof(arr)-1){
 printf("Stack overflow"); 
  }
  arr[++top]=data;
}

int pop(){
 if(top==-1){
    printf("Stack underflow");
 }
 return arr[top--];
}
void peek(){
    if(top==0){
        printf("Stack is empty");
    }
    printf("peek element is %d",arr[top]);
}


int main(){

push(5);
push(17);
push(14);
push(9);

for (int i = 0; i <= top; i++)
{
  printf("%d ",arr[i]);
}
}