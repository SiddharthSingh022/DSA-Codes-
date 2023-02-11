#include<stdio.h>
int linersearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        
        {
        return i;
        }
        
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0,55};
    int size=sizeof(arr)/sizeof(int);
    int element;
    printf("size of element are %d\n",size);
    printf("enter the element:");
    scanf("%d",&element);
    int searchindex=linersearch(arr,size,element);
    printf("the element %d was found at index %d\n",element,searchindex);

    return 0;
}