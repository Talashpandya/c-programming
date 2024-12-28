#include<stdio.h>
int main (){
int r,c;
scanf ("%d %d",&r,&c);
int arr [r][c];

for (int i=0;i<r;i++){
    for (int j=0;j<c;j++){
        scanf ("%d",&arr[i][j]);
    }
}
for (int i=0;i<r;i++){
    for (int j=i;j<c;j++){
    int temp = arr[i][j];
    arr[i][j]=arr [j][i];
    arr[j][i]= temp;       
    }}
for (int i=0;i<c;i++){
    for (int j=0;j<r;j++){
      printf ("%d",arr[i][j]);
    }
    printf ("\n");
}
return 0;
}



