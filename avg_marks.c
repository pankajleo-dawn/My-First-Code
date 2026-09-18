#include<stdio.h>
int main(){
    printf("enter marks of 5 subject");
    float S1, S2, S3, S4, S5, avg ;
    scanf("%f %f %f %f %f", &S1,&S2,&S3,&S4,&S5);

    avg = (S1+S2+S3+S4+S5)/5;
    printf("avg. of marks is %f", avg);

    return 0;
}