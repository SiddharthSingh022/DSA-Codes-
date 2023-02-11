#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n){
    for (int  i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
//code for indeletion
// void indeletion(int arr[],int size,int index){
//     for (int i =index ; i < size-1; i++)
//     {
//         arr[i]=arr[i+1];
//     }
    
//}

int indInsertion(int arr[], int size, int element, int capacity, int index){
    // code for Insertion
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1; 
}
void insertion(int arr[],int size ,int element,int index ){
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    }
    
int main()
{
 int arr[100]={7,8,12,27,88};
  int size=5,element,index=0;
    scanf("%d",&element);
    display(arr,size);
    indeletion(arr,size,index);
    size-=1;
    display(arr,size);
    size+=1;
     indInsertion(arr, size, element, 100, index);
    // indInsertion(arr,size,element);
    display(arr,size);
   // display(arr,size,element);
    return 0;
}