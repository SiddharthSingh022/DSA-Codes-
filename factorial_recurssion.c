#include<stdio.h>
int factoriaal(int n){
    if(n==0)
        return 1;
        int sm=factoriaal(n-1);
        int bm=n*sm;
        return bm;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int ans =factoriaal(n);
    printf("%d",ans);
    return 0;
}