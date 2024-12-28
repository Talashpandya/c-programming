#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            int x = 0;
            for (int k = 0; k < j; k++)
            {
                x = x + n - k;
                
            
            }
            if (j % 2 == 0)
                {
                    

                        printf("%d ",x+i-j+1);
                }
                else
                {
                   
                    printf ("%d ",x+n-i);
                }
        }

        printf ("\n");
    }

    return 0;
}