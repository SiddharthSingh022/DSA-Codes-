#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define s 1000
int stack[s];
int top =-1;
int stack[s];
void push();
int pop();
int peek();
bool isEmpty();
bool isFull();
int main()
{
    printf("total number of element in stack is %d",s);
    int choice;
    while(1){
    printf("0:exit\n1:push\n2:pop\n3:peek\n4:is empty\n5:is full\n\n");
    scanf("%d",&choice);
    switch (choice){
        case 0:exit(0);
        case 1:push();break;
        case 2:pop();break;
        case 3:peek();break;
        case 4:isEmpty();break;
        case 5:isFull();break;
        default:printf("please choose a correct option!");
    } 
    }
    return 0;
}
void push(){

    if(top==s-1)
    printf("overflow state cant't add more element into the stack\n");
    else{
        int x;
        printf("eneter the element to be add into stack ");
        scanf("%d",&x);
        top+=1;
        stack[top]=x;

    }
}
int pop(){
    if(top==-1)
    printf("stack is already empty ");
    else{
        int x =stack[top];
        printf("poping out %d from stack",x);
        top-=1;
        return x;

    }
    return -1;
}
int peek(){
    int x=stack[top];
    printf("%d is the top most element\n",x);
    return x;
}
bool isEmpty(){
    if (top==-1){
        printf("stack is empty:");
        return true;
    }
    printf("Stack is not empty\n\n");
    return false;

    
}
bool isFull(){
    if (top==s-1){
        printf("stack is full ");
        return true;
    }
    printf("stack is not full\n");
    return false;
    
}