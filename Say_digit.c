#include<stdio.h>
#include<string.h>
void sayDigit(int n,  char arr[n]){
    //base case
    if(n==0)
    return ;
    //processiong
    int digit=n%10;
    n=n/10;
    //recursive call
    sayDigit(n,arr);
    printf("%d",arr[digit]);

}
int main(){
char arr[10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
int n;
scanf("%d",&n);
printf("/n");
sayDigit(n,arr);
printf("/n");
}
