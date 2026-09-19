#include <stdio.h>
int main(){
    int a,b ;
    a=10;
    b=20;
    printf("before swapping\n");
    printf("a:%d",a);
    printf("a:%d\n",b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a:%d",a);
    printf("b:%d",b);
    return 0 ;
}