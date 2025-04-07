#include<stdio.h>
int main(){
    int ch;
    scanf("%d",&ch);
    
    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    if else(ch>='a' && ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}