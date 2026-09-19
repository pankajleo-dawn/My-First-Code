#include<stdio.h>
int main(){
    int a ;
    printf("enter number:");
    scanf("%d",&a);
    if (a==1){
        printf("I");
    }
    else if (a==2){
        printf("II");
    }    
    else if (a==3){
        printf("III");
    }
    else if (a==4){
        printf("IV");
    }
    else if (a==5){
        printf("V");
    }
    else {
        printf("number is greater than 5");
    }
    return 0;
}