#include <stdio.h>
int main(){
  int sum = 0;
  int i,n;
  scanf("%d",&n);
  for (i=0; i<=n; i++)
  {
    if(i>0 && i<4){
      sum+=i;
    }else if (i>3 && i<7)
    {
      sum-=i;
    }else if (i>6 && i<10)
    {
      sum+=i;
    }else if (i>9 && i<13)
    {
      sum-=i;
    }else if (i>12 && i<16)
    {
      sum+=i;
    }else if (i>15 && i<19)
    {
      sum-=i;
    }else{
      sum+=i;
    }
  }
  printf("%d",sum);
return 0;
}