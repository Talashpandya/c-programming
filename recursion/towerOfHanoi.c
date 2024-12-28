#include<stdio.h>
void tower (int n,char s,char h,char d){
    if (n==0) return;
    tower (n-1,s,d,h);
    printf ("%c to %c\n",s,d);
    tower (n-1,h,s,d);
    return ;
}
int main (){
    tower (3,'A','B','C');
    return 0;
}