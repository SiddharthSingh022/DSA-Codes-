#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int size;
    int top;
    char*arr;
};
int stacktop(struct stack *sp){
    return sp->arr[sp->top];
}
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
 if(ptr->top==ptr->size-1)  {
return 1;
 } 
 else{
    return 0;
 }
}
void push(struct stack *ptr,char val){
    if(isfull(ptr)){
        printf("struct overflow cannot push%d to the stack\n",val);

    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack*ptr){
    if (isempty(ptr))
    {
        printf("stack underflow cannot pop from the stack");
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
 
}
   int precendence(char ch){
        if(ch=='*'||ch=='/')
        return 3;
        else if(ch=='+'||ch=='-')
        return 2;
        else 
        return 0;
        }
int isoperator(char ch){
    if(ch=='+'|ch=='-'||ch=='+'||ch=='/')
    return 1;
    else;
    return 0;
}
char* inflixTopostfix(char*infix){
    struct stack*sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size *sizeof(char));
     char*postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
     int i=0;
     int j=0;
     while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
        postfix[j]=infix[i];
        j++;
        i++;
        }
        else{
            if(precendence(infix[i])>precendence(stacktop(sp)))
            {
                push(sp,infix[i]);
                i++;
            }
            else
            {
                postfix[j]=pop(sp);
                j++;
            }
              
        }
     }
     while(!isempty(sp)){
 postfix[j]=pop(sp);
 j++;   
}
postfix[j]='\0';
return postfix;
}
int main(){
    char*infix="x-y/zk*d";
    printf("postfix is %s",inflixTopostfix(infix));
    return 0;
}
