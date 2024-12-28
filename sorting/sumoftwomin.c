#include<stdio.h>
int main (){
    int arr [7]={71,67,51,42,37,35,89};
    int n = 7;

    for (int i = 0; i < 7-1; i++)
    {
        for (int j = 0; j < 7-1; j++)
        {
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr [j+1]=temp;
            }
        }
        
    }
    int min = arr[0];
    int min2;
    for (int i=1;i<7;i++){
    if (arr [i]>arr[i-1]){
        min2 = arr[i];
        break;
    }} 
    int sum = min+min2;
    for (int i=0;i<6;i++){
    printf ("%d ",arr[i]);}

    printf ("\n%d",sum);
    return 0;
}