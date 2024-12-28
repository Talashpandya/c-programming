#include<stdio.h>
int fact (int a) {

    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
         fact = fact * i ;
    }
    return fact;   
}
int combination (int x , int y){
    int comb = fact (x)/(fact (y) * fact (x-y));
   return comb;
}
int main () {
    int n;
    scanf ( "%d",&n);
    for (int i = 0;i<=n;i++){
        for (int k=0;k<=n-i;k++){
            printf (" ");
        }
        
        
        for (int j=0;j<=i;j++){
            printf ("%d ",combination (i,j));
        }
        printf ("\n");
    }
    
    return 0;
}