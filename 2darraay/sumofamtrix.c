#include<stdio.h>
int main (){
int arr[2][2]={1,2,3,4};
int brr [2][2]={1,2,3,8};
int sum=0;
for (int i=0;i<2;i++){
    for (int j =0;j<2;j++){
          sum +=arr[i][j];
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
printf ("%d",sum);
return 0;
}
