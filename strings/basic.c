#include<stdio.h>
int main (){
char str [40];
// gets(str);
scanf("%[^\n]s",&str);
printf ("%s",str);
  return 0;
}