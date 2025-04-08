#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n;

    for(int i=1 ; i<=n ; i++){
        for(int k=1 ; k<=a-i ;k++){
            printf(" ");
        }
        for(int j=1 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
}