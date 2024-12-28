#include<stdio.h>
int main (){
    int arr [7]={7,6,5,4,3,2,1};
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
    for (int i=0;i<6;i++){
    printf ("%d ",arr[i]);}
    
    return 0;
}