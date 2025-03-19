#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);


    for(i=1 ; i<=n*10 ; i=i+n){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}