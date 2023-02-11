#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define s 1000
int stack[s];
int top=-1;
int stack[s];
void push();
int pop();
int pop();
int peek();
bool isempty();
bool isfull();
int main(){
    printf("total number of element in stack is %d",s);
    int choice;
    while(1){
        printf("0:exit\n1:push\n2:pop\n3:peek\n4:is empty\n5:is full");
        scanf("%d",&choice);
        switch (choice)
        {
        case 0:exit(0);
        case 1:push();break;
        case 2:pop();break;
        case 3:peek();break;
        case 4:isempty();break;
        case 5:isfull();break;
        
        default:printf("please choose a correct option");
            break;
        }
    }
    return 0;
}
void push(){
    if(top==s-1)
    printf("overflow state cant't add more element into the stack \n");
    else{
        int x;
        printf("enter the element to be add into stack\n");
        scanf("%d",&x);
        top +=1;
        stack[top]=x;

    }
}