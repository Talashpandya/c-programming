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
int n = 5;
int r = 3;
  int comb = combination(n,r);
  printf("combination is %d", comb);
  return 0;
}