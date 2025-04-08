#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
        b=1;
        for(int j=1 ; j<=i ; j++){
            char ch=(char)(64+b);
            printf("%c ",ch);
        }
        printf("\n");
    }
}