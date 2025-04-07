#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n;
    int d=1;

    for(int i=1 ; i<=n ; i++){
        for(int k=1 ; k<=d ; k++){
            printf(" ");
        }
        d--;
        for(int j=1 ; j<=a ; j++){
            printf("*");
        }
        a=a+2;
        printf("\n");
    }
    
}