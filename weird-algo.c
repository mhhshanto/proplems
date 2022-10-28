#include <stdio.h>
int main()
{int n;
  scanf("%d", &n);
  while (n > 0)
  {if (n % 2 == 0)
    {printf("%d ", n);
       n = n / 2;}
    else
    {printf("%d ", n);
      n = n - 1;}}
  return 0;}
// 123, 122, 61, 60, 30, 15, 14, 7, 6, 3, 2, 1