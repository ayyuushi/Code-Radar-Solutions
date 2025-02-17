#include<stdio.h>
int main(){
    int l;
    scanf("%d",&l);

    if(l%5==0 && l%11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}