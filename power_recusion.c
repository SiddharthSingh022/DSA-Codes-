#include<stdio.h>
int power(int n){
    //base case
    if(n==0)
    return 1;
    //recusive relation
    return 2*power(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int ans=power(n);
    printf("%d",ans);
    return 0;
}
