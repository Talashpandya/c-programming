#include<stdio.h>
int main (){
int m,n,p,q;
scanf ("%d %d %d %d",&m,&n,&p,&q);
int arr [m][n];
int brr [p][q];
int res [m][q];
if (n==p){
    printf ("first matrix");
for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
        scanf ("%d",&arr[i][j]);
    }
}
printf ("second matrix");
for (int i=0;i<p;i++){
    for (int j=0;j<q;j++){
        scanf ("%d",&brr[i][j]);
    }
}
for (int i =0 ; i<m;i++){
    for (int j = 0; j < q; j++)
    {     res [i][j]=0;
    for (int k = 0; k < n; k++)
    {
        res[i][j] += arr[i][k]*brr[k][j];
    }
    
        
    }
    
}
for (int i=0;i<m;i++){
    for (int j=0;j<q;j++){
      printf ("%d ",res [i][j]);
    }
    printf ("\n");
}
}
else printf ("this matrix cannot be multiplied");
return 0;
}


