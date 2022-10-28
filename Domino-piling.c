
#include <stdio.h>
int main(){
  int n,h,i,x;
  scanf("%d%d",&n,&h);
  int w =0;
  while (n--)
  {
    scanf("%d",&x);
    if(x>h)
          w += 2;
            else
          w++;
  }
  printf("%d", w);
  return 0;
}
