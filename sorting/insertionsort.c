#include<stdio.h>
int main (){
    int arr [7]={7,6,5,4,3,2,1};
    for (int i=1;i<7;i++){
        int j=i;
    while (j>=1 && arr[j]<arr[j-1])
    {
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
    
    }
    for (int i=0;i<6;i++){
    printf ("%d ",arr[i]);}
    
    return 0;
}