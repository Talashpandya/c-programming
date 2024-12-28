#include<stdio.h>
int main (){
    int n = 6;
    int arr [6] = {1,2,3,7,8,7};
    int brr [n];
    for (int i = 0; i < n; i++)
    {
         brr [i]=arr [n-1-i];
         printf ("%d\n",brr[i]);
    }
    
    
    return 0;
}