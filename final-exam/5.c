#include <stdio.h>
int sum(int x, int y)
{
  return x + y;
}
int main()
{ 
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%d %d %d",
          x, y, sum(x, y));
  return 0;
} 