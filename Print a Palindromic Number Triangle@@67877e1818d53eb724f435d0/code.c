#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n;
   

    for(int i=1 ; i<=n ; i++){
         int y=i-1;
        for(int j=1 ; j<=a-i ; j++){
            printf(" ");
        }
        for(int k=1 ; k<=i ; k++){
            printf("%d",k);
        }
        for(int x=1 ; x<=i-1 ;x++){
            printf("%d",y);
            y--;
        }
        printf("\n");
    }
}