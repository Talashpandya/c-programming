#include<stdio.h>

int main (){
    int a=4,b=8;
    int swap ();
    swap (&a,&b);
printf ("%d %d",a,b);
    return 0;
}
int swap (int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
 
}