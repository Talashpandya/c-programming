#include<stdio.h>
int main (){
    int n,i;
    scanf ("%d",&n);
    int prev=1;
    int prevadd = 1;
    printf ("%d\n",prev);
    for (i=2;i<=n;i++)
    {
        prev +=prevadd;
        int l = prev % 10;
        prev = prev*10 +l;
        prevadd =  prevadd*10+1;
        printf("%d\n",prev);

    }
    return 0;
}