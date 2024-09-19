#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MAXSIZE 50
char stack[MAXSIZE];
int top=-1;
void push(char data);
char pop();
int isEmpty();
int isFull();
int peek();
void postconv(char infix[]);
int precedence(char x);

int isEmpty(int stack[]){
    return top==-1;
}
int isFull(int stack[]){
    return top==MAXSIZE-1;
}
void push(char data){
   if(top==sizeof(stack)-1){
   printf("Stack overflow"); 
   }
   else
   stack[++top]=data;
}

char pop(){
    if(top==-1){
    printf("Stack underflow");
     return '\0';
    }
    else
    return stack[top--];
}
int peek(){
    if(top==-1){
    printf("Stack is Empty");
    return '\0';
    }
    else
    return stack[top]; 
}
void postconv(char infix[]){
    int y;
    y = strlen(infix);
    int i=0,j=0;
    char x,temp;
    char postfix[40];
    push('(');
    infix[y] = ')';
    infix[y + 1] = '\0';
    while (i<=y)
    {
        x=infix[i];
        switch (x)
        {
        case '(':
            push(x);
            break;
        case ')':
            while(peek()!='('){
                postfix[j++]=pop();
            }
            pop();
            break;
        default:
            if (x >= 'a' && x <= 'z') {
                    postfix[j++] = x;
            }
            else{
             while (precedence(x) <= precedence(peek()))
             {
                postfix[j++]=pop();
             }
             push(x);
            }
            break;
        }
    }
    postfix[j]='\0';
    printf("Postfix Expression: %s\n", postfix);
}
int precedence(char x){
    if(x=='$'||x=='^')
        return(5);
    else if(x=='*'||x=='/')
    return(4);
    else if(x=='+'||x=='-')
    return(3);
    else
    return(2);
}
int main(){
    // char infix[25];
    // printf("Enter the infix Expression = ");
    // gets(infix);
    // postconv(infix);
    // getch();
    // return 0;
    char infix[MAXSIZE];
    printf("Enter the infix Expression: ");
    fgets(infix, MAXSIZE, stdin);
    // Remove newline character from fgets input
    infix[strcspn(infix, "\n")] = '\0';
    postconv(infix);
    return 0;

}
