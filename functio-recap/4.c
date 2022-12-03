#include <stdio.h>
int main(){
  int i,n;
  scanf("%d",&n);
  for ( i = 1; i < n; i++)
  {
    if (i+(i+2)+(i+4)+(i+6) == n)
    {
      printf("%d %d %d %d",i,i+2,i+4,i+6);
    }
  }
   return 0;
}