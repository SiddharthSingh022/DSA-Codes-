// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     //creating a stack
//     stack<int> s;
// //push operation
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     //pop operation
//     s.pop();
// cout<<"printing top element \n"<<s.top()<<endl;
// if(s.empty()){
//     cout<<"stack is empty"<<endl;
// }
// else{
//     cout<<"stack is not empty\ns"<<endl;
// }
// cout<<"size of stack is "<<s.size()<<endl;
// return 0;
// }




 //stack using arrayclass
#include<iostream>
#include<stack>
using namespace std;
class Stack{
    //properties
    public :
    int *arr;
    int top;
    int size;
    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;    
    }
    void push(int element ){
if(size - top>1){
top++;
arr[top]=element;
}
else{
    cout<<"Stack overflow"<<endl;
}
    }
    void pop(){
if (top>=0){
    top==1;
}
else{
    cout<<"stack underflow"<<endl;
}
}
    int peek(){
if (top>=0&&top<size)
return arr[top];
else
{
 cout<<"stack is empty"<<endl;
}

    }
    bool isEmpty(){
if (top==-1){
    return true;
}
else{
    return false;
}

    }

};
int main(){
    Stack st(5);
    st.push(44);
    st.push(22);
    st.push(33);
    st.push(23);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
     st.pop();
    cout<<st.peek()<<endl;
}