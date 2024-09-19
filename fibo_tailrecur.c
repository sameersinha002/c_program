#include<stdio.h>

int fibo(int n,int x,int y){
    if (n==0)
    {
      return x;
    }
    fibo(n-1,y,x+y);
    
}