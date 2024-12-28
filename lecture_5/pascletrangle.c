#include <stdio.h>
int fact(int n)
{
  int factorial = 1;
  for (int i = 1; i <= n; i++)
  {
    factorial = factorial * i;
  }
  return factorial;
}
int combination(int n, int r)
{
  int combi = fact(n) / (fact(r) * fact(n - r));
  return combi;
}
int main()
{
  int n = 7;
  for (int i = 0; i <= n - 1; i++)
  {
    for (int k = n - i; k >= 0; k--)
    {
      printf(" ");
    }
    for (int j = 0; j <= i; j++)
    {
      int combinatio = combination(i, j);
      printf("%d ", combinatio);
    }
    printf("\n");
  }
  return 0;
}