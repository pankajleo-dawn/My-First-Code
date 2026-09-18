//print the weak name//
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number (1-7):");
    scanf("%d%d%d%d%d%d%d",&monday,&tuesday,&wednesday,&thursday,&friday,&saturday,&sunday);
    switch(n)
        {
    case 1:
    printf("monday");
    break;

    case 2:
    printf("tuesday");
    break;

    case 3:
    printf("wednesday");
    break;

    case 4:
    printf("thueshday");
    break;

    case 5:
    printf("friday");
    break;

    case 6:
    printf("saturday");
    break;

    case 7:
    printf("sunday");
    break;
    }
    return 0;
}