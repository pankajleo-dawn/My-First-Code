#include<stdio.h>
int main(){
    float principal_amt , time , interest ;
    float getting_amt , rate ;

    printf("Enter your principal amount\n");
    scanf("%f", &principal_amt);
    printf("what is the rate you want\n");
    scanf("%f", &rate);
    printf("Enter how much time you want to keep the amount\n");
    scanf("%f", &time);

    interest = (principal_amt*time*rate)/100 ;
    printf("Your interest amount is %f\n", interest);

    getting_amt = principal_amt + interest ;
    printf("You will get the amount of %f after %f years", getting_amt , time);
    return 0;
}