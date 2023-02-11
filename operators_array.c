#include<stdio.h>
void display(int arr[] ,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int insInsertion(int arr[],int size,int elemnet,int capacity,int index){
    if (size>=capacity)
    {
        return -1;
    }
    for (int  i = size-1; i >= elemnet; i--)
    {

        arr[i+1]=arr[i];
    }
    arr[index]=elemnet;
    return 1;
    
}
int main()
{
    int arr[100]={1,2,3,4,43,37};
    int capacity=100;
    int size=6 , elemnet=6, index=1;
    insInsertion(arr,size,elemnet,index,100);
    
    size+=1;
    display(arr, size);
    return 0;
}
