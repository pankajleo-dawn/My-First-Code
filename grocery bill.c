#include <stdio.h>
int main () {
    int m, p, n1, b, n2 ;
    printf("total money i have:");
    scanf("%d", &m);
    printf("\nnumber of pens purchased:");
    scanf("%d", &p);
    printf("\nunit price of a pen:");
    scanf("%d", &n1);
    printf("\nnumber of books purchased:");
    scanf("%d", &b);
    printf("\nunit price of a book:");
    scanf("%d", &n2);
    printf("\nexpendature on pens:=%d", p*n1 );
    printf("\nexpendature on books:=%d", b*n2 );
    printf("\nmoney left:=%d", m - p*n1 - b*n2 );
    return 0 ;

}