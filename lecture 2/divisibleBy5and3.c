// #include <stdio.h>
// int main () {
//     int n;
//     scanf ("%d",&n);
//     if (n % 5 == 0 && n % 3 == 0 ) {
//         printf ("the digit is divisible by 5 and 3");
//     }
//     else {
//         printf ("not divisible by 5 and 3");
//     }
// return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 5 == 0 && n % 3 == 0) {
        printf("The number is divisible by 5 and 3\n");
        return 0;
    } 
    else if (n%3==0) {
        printf ("hello");

    }
    else if (n%5==0){
        printf ("world");
    }
    return 0;
}