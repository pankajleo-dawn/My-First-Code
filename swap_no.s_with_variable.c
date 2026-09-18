#include <stdio.h>
int main (){
    int a,b ;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    printf("before swap\n");
    printf("a:%d",a);
    printf(" b:%d\n",b);

    int c ;
    c=a;
    a=b;
    b=c;
    printf("after swap\n");
    printf("a:%d",a);
    printf(" b:%d",b);
    return 0;
}