#include<stdio.h>
void swap ( int* x , int* y ){
    int temp ;
    temp = *x ;
    *x=*y;
    *y=temp;
    return;

}
int main (){
    int a,b;
   a=6,b=5;
   swap (&a,&b);
   printf ("%d %d",a,b);
    return 0;
}