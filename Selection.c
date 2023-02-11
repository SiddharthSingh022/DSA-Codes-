#include<stdio.h>
#include<stdlib.h>
//function to print sorted aarray in using inputs
void printarray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    printf("\n");
}
//using selection sort to sort array
void selection(int*arr,int n){
    int indexOfmin,temp;//temp is extra element,index is first element of array
    printf("running selection sort...\n");
    for(int i=0;i<n-1;i++){
        indexOfmin=i;
        for (int j = i+1; j < n; j++)
        {
        if (arr[j]<arr[indexOfmin]){
            indexOfmin=j;
        }
        }///swaping of element in array using this 
        temp=arr[i];
        arr[i]=arr[indexOfmin];
        arr[indexOfmin]=temp;
    }
}
int main(){
    printf("enter no of element in array:");
    int n;
    scanf("%d",&n);
     int arr[n];

  printf("Enter integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < n; ++i) {
     scanf("%d", &arr[i]);
  }

  printf("Displaying unsorted array: ");

    
    printarray(arr,n);
     selection(arr,n);
     printf("displaying sorted array ");
     printarray(arr,n);
 }


