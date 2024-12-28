#include<stdio.h>
void reverse (int arr[]){
for (int i = 0,j=5;i<=j;i++,j--){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
}
return;
}
int main (){
    int n = 6;
    int arr [6] = {1,2,3,7,8,7};
    reverse (arr);
    for (int i =0;i< 6;i++){
    printf ("%d ",arr[i]);
    }
    return 0;
}