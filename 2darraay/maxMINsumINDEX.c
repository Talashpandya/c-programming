#include<stdio.h>
int main (){
int arr[2][2]={1,9,3,4};
int brr [2][2]={1,2,3,8};
int sum=0;
int max=arr[0][0];
int min=arr[0][0];
int idxmaxi =0;
int idxmaxj =0;
for (int i=0;i<2;i++){
    for (int j =0;j<2;j++){
          sum +=arr[i][j];
          if (arr[i][j]>max) {
            max = arr[i][j];
            idxmaxi = i;
            idxmaxj = j;
          }
          if (arr[i][j]<min) min = arr[i][j];
        arr[i][j]+=brr[i][j];
      
    }
    printf ("\n");
} 
for (int i=0;i<2;i++){
    for (int j =0;j<2;j++){
       printf ("% d",arr[i][j]);
  
} 
  printf ("\n");
}
printf ("%d %d %d index of maximum element (%d,%d)",sum,max,min,idxmaxi,idxmaxj);
return 0;
}
