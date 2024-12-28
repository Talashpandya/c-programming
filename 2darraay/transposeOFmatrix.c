#include<stdio.h>
int main (){
int r,c;
scanf ("%d %d",&r,&c);
int arr [r][c];
int brr [c][r];
for (int i=0;i<r;i++){
    for (int j=0;j<c;j++){
        scanf ("%d",&arr[i][j]);
    }
}
for (int i=0;i<c;i++){
    for (int j=0;j<r;j++){
        brr [j][i]=arr[i][j];
    }}
for (int i=0;i<c;i++){
    for (int j=0;j<r;j++){
        printf ("%d",brr[i][j]);
    }
    printf ("\n");
}
return 0;
}