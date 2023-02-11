#include<stdio.h>
int countDistinctWayTo(long long nStairs){
    //base case
    if(nStairs < 0)
    return 0;
    if(nStairs == 0)
    return 1;
    //R,c
    int ans=countDistinctWayTo(nStairs-1)+countDistinctWayTo(nStairs-2);
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    int a=countDistinctWayTo(n);
    printf("%d",a);
    return 0;
    
}