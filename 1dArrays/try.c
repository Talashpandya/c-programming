#include <stdio.h>
#include<stdbool.h>
int main()
{
    
    int arr[7] = { 1,2,6,6,2,4,4} ;
   bool flag;
    for (int i = 0; i <=6 ; i++)
    { flag = false;
        for (int j=0;j<=6;j++)
        {
            if (arr[i]==arr[j] && i != j){
                flag = true;
          continue ;
            }

            }
            if (!flag){
                printf ("   %d    ",arr[i]);
                break;
            }
    
            
        }
        
      return 0;
            }
// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int arr[7] = {2, 2, 6, 6, 1, 4, 4};
//     bool flag;

//     for (int i = 0; i <= 6; i++) {
//         flag = false;

//         for (int j = 0; j <= 6; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 flag = true;
//                 break;
//             }
//         }

//         if (!flag) {
//             printf("%d\n", arr[i]);
//             // Remove this break statement if you want to find all non-repeated numbers
//         }
//     }

//     return 0;
// }

