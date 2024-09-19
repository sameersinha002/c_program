#include<stdio.h>
#include<string.h>
int main(){
    int count1=0;
    int count2=0;
    int count3=0;
char arr[]="{[(]}";
int lenght=strlen(arr);
for (char i = 0; i < lenght; i++)
{
  if(arr[i]=='('){
    count1++;
  }
  if(arr[i]=='{'){
    count2++;
  }
  if(arr[i]=='['){
    count3++;
  }
  if (arr[i]==')')
  {
    if(count1==0){
        printf("Not Balanced");
        return 0;
    }
    else
    count1--;
  }
  if (arr[i]==']')
  {
    if(count3==0){
        printf("Not Balanced");
        return 0;
    }
    else
    count3--;
  }
  if (arr[i]=='}')
  {
    if(count2==0){
        printf("Not Balanced");
        return 0;
    }
    else
    count2--;
  }
}
if(count1==0&&count2==0&&count3==0){
    printf("parnatheis is balanced");
}
else
printf("Not Balanced");
return 0;

}