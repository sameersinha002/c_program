#include<stdio.h>
void print(int x){
    if (x==0)
    {
        return;
    }
    else{
    print(x-1);
    printf("%d",x);
}
}
int main(){
    int n=5;
    print(n);
return 0;
}