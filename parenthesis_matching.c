#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char*arr;

};
int isempty(struct stack*ptr){
    if(ptr->top==-1){
        return -1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr,char val){
    if(isfull(ptr)){
        printf("stack overflow cannot push %d to the stack");
    }
    else{
        ptr->top;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("stack underflow cannot pop from the stack ");
        return -1;
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesismatching(char*exp){
    //creating and ininting the stack 
    struct stack*sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(sp,'(');
        }
        else if(exp[i]==')'){
            if(isempty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    if (isempty(sp)){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    char*exp="((*I&^&^(^8667687^*&^9()())";
    //check if stack is empty   
    if (parenthesismatching(exp))
    {
        printf("the parenthesis is matching");
    }
    else{
        printf("the parenthesis is not matching");
    }
    return 0;
    

}