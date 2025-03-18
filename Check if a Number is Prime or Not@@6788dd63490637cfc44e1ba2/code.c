#include<stdio.h>
int main(){
    int a,i,n;
    scanf("%d",&n);
    a=0;

    for(i=2 ; i=n-1 ; i++){
        if(n%i==0){
            a==1;
        }
        if(a==0){
            printf("Prime");
        }
        else
        printf("Not Prime");
    }

}