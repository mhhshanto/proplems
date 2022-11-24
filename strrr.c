#include <stdio.h>
int main(){
  int i,a,b;
  char str[20];
  int plu = 0;
  int su = 0;
  scanf("%s",str);
  scanf("%d%d",&a,&b);
  for ( i = 0; i < 20; i++)
  {
    if (str[i] == '*')
    {
      plu += a*b; 
    }else if (str[i] == '+')
    {
      su += a+b;
    }
    
    
  }
  printf("%d",plu + su);
  return 0;
}