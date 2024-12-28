#include<stdio.h>
int main (){
int n;
scanf ("%d",&n);
if ( (n%5 == 0 || n%3 == 0) && n % 15 != 0 ){
    printf ("the no is divisible by 5 snd 3 but not by 15");
}
else {
    printf("it does not fullfill the requirement condition");
}
    return 0;
   
}