#include<stdio.h>
int fact (int a) {

    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
         fact = fact * i ;
    }
    return fact;   
}
void combination (int x , int y){
    int comb = fact (x)/(fact (y) * fact (x-y));
     printf("Combination (%d, %d) = %d\n", x, y, comb);
}
int main () {
    int n,r;
    scanf ("%d %d",&n,&r);
    combination (n,r);
    return 0;
}
