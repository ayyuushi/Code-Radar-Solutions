#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n;

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=a-i ; j++){
            printf(" ");
        }
        for(int k=1 ; k<=i ; k++){
            printf("%d",k);
        }
        printf("\n");
    }
}