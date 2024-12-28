#include<stdio.h>
#include<limits.h>

int main (){
    int arr [7]={7,6,5,4,3,2,1};
   
    int minidx=0;
    int k=8-5;
    for (int i = 0;i<=k-1;i++){
    int min=INT_MIN;
    for (int j=i;j<7;j++){
        if (arr[i]>min){
         min = arr[i];
         minidx = j; 
        }
    }
    int temp = arr [minidx];
    arr[minidx]=arr[i];
    arr [i]=temp;
    }
     
    printf ("%d",arr[minidx]);
    return 0;
}
// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int arr[7] = {7, 6, 5, 4, 3, 2, 1};
//     int n = 4
//     ; // Change 'k' to 'n' for the nth largest number
//     int maxidx = 0;

//     for (int i = 0; i < n; i++) {
//         int max = INT_MIN;
//         for (int j = 0; j < 7 - i; j++) {
//             if (arr[j] > max) {
//                 max = arr[j];
//                 maxidx = j;
//             }
//         }

//         // Swap the maximum element with the last unsorted element
//         int temp = arr[7 - i - 1];
//         arr[7 - i - 1] = arr[maxidx];
//         arr[maxidx] = temp;
//     }

//     printf("The nth largest number is: %d", arr[7 - n]);
//     return 0;
// }
