#include <stdio.h>
int main()
{
    int n = 49;
    for (int i = 0; i <= n; i++)
    {
        if (i >= 0 && i <= 36)
        {
            printf("fail");
            break;
        }
        else if
        
            (i > 36 && i <= 60)
   {          printf("d");
            break;
        }
        else if
        
            (i > 60 && i <= 70) {printf("c");
            break;
        }
        else if
        
            (i > 70 && i <= 80) {printf("b");
            break;
        }
        else if
        
            (i > 80 && i <= 90) {printf("A");
            break;
        }
        else if
        
            (i > 90) {printf("A+");
            break;
        }
    }

    return 0;
}
// #include <stdio.h>
// int main () {
//     int sum =0,n=49;
//     for ( int i =1 ; i<=n;i++){
//         if (i>=1 && i<=50) sum +=1;
//         else if (i>50 && i<=100) sum += 0.7;
//         else if (i>100 && i<=200) sum += 0.5;
//         else if (i>200 && i<=300) sum +=0.25;
//         else if (i>300) sum +=0.12;
//     }
//     printf ("%d",sum);
//     return 0;
// }
