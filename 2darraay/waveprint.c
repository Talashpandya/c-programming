#include<stdio.h>
int main (){
int m,n;
scanf ("%d %d",&m,&n);
int arr [m][n];

for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
        scanf ("%d",&arr[i][j]);
    }
} 
for (int i=0;i<n;i++){
   
   if (i%2==0){
    for (int j = m-1; j >=0; j--)
    {
        printf ("%d",arr[j][i]);
    }
   }
     else  {
        for (int j=0;j<m;j++){
            printf ("%d",arr [j][i]);
        }
    }
    printf ("\n");
}
return 0;
}



