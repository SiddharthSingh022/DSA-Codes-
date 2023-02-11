#include<stdio.h> 
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
}
 
int main(){
    int n;
    printf("enter no of element you wnt to add in arr");
    scanf("%d",&n);
    int arr[n];
    printf("enter the number:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("print the number you wnt to find:\n");
    scanf("%d",&element);
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
    
}