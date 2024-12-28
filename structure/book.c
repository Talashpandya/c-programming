#include<stdio.h>
#include<string.h>
int main (){
struct book
{
    char name [50];
    float price;
    int noOfPages;
}a,b,c;
a.noOfPages=100;
a.price=411.22;
strcpy(a.name,"secrets ven");
printf ("%s",a.name);
return 0;
}