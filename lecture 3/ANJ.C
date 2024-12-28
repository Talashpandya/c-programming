#include <stdio.h>
int main () {
int a,b,z;
    printf("Enter your dividend:");
    scanf("%d",&a);
    printf("Enter your divisor:");
    scanf("%d",&b);
    z=b%a;
    printf("%d",&z);
    return 0;
}