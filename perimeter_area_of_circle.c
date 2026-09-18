#include<stdio.h>
int main(){
    float radius , perimeter , area ;
    const float pi = 3.1427f ;
    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);

    perimeter = 2*pi*radius ;
    printf("The perimeter of the circle is %f ", perimeter);

    area = pi*radius*radius ;
    printf("Area of the circle is %f", area);
    return 0 ;
}