#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b=1;

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            char x=(char)(64+b);
            printf("%c ",x);
            b++;
        }
        printf("\n");
    }
}