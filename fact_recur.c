#include<stdio.h>
int fact(int x){
    if (x==0)
    return 1;
    else
    return x*fact(x-1);
}
int main(){
    int x,n;
    printf("Enter Number:\n");
    scanf("%d",&n);
    x=fact(n);
    printf("Factorial is %d",x);
return 0;
}