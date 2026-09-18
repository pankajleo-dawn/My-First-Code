#include<stdio.h>
int main(){
    int x,y ;
    x=10;
    y=20;
  //increment
    x++;
    printf("%d\n",x);
    y+=1;
    printf("%d\n",y);
 //decrement
    x-- ;
    printf("%d\n",x);
    y-=1;
    printf("%d\n",y);
  //pre increment decrement
    ++x;
    printf("%d\n",x);
    --y;
    printf("%d\n",y);
    return 0;       
}