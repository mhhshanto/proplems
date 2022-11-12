#include <stdio.h>
int main()
{
   int i,n, t, sum = 0, rem;
   scanf("%d", &n);
   t = n;
   for (i=n;i>0; i--)
   {
      rem = t % 10;
      sum       = sum + rem;
      t         = t / 10;
   }
   printf("%d",sum);
   return 0;
}