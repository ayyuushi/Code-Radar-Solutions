#include<stdio.h>
int main(){
    int l;
    scanf("%d",&l);

    if(l%5==0 && l%11==0){
        printf("Divsible");
    }
    else{
        printf("Not Divisble");
    }
    return 0;
}