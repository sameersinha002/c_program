#include<stdarg.h>
#include<stdio.h>

int sum11(int num,...)
{
va_list valist;
int sum=0,i;
va_start(valist,num);
for(i=0;i<num;i++)
    sum+=va_arg(valist,int);
    va_end(valist);
    return sum;
}
int main(){
    
}