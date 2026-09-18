#include<stdio.h>
int main(){
    float radius , painting_amt , area , total_painting_amt ;
    const float pi = 3.1427f ;
    printf("enter the radius\n");
    scanf("%f", &radius);
    area = pi*radius*radius ;
    printf("area of the circle is %f\n", area);
    printf("enter the amount of money to paint on per sqft\n") ;
    scanf("%f", &painting_amt);

    total_painting_amt = painting_amt*area ;
    printf("%f is total_painting_amt");
    return 0;
}