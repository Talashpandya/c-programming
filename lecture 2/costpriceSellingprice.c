#include<stdio.h>
int main(){
int cp,sp;
scanf ("%d %d",&sp,&cp);
if (sp>cp) {
    int a = sp-cp;
    printf ("profit of %d",a);
}
else if (sp==cp) {
    printf ("no profit no loss ");

}
else if (sp<cp) {
    int b = cp-sp;
    printf ("loss of %d",b);

}
    return 0;
}