#include <stdio.h>
void primefact (int n) {

    while ( n%2==0){
        printf ("2 ");
        n=n/2;
    }
    for (int i =3;i<=n;i+=2){
        while (n%i==0){
            printf ("%d ",i);
            n=n/i;

        }
        
    }
    return;

}
int main (){
    int a;
    scanf ("%d",&a);
    primefact (a);
    return 0;
}