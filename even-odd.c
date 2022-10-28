#include <stdio.h>
int main(){
  int n,p,i;
scanf("%d%d",&n,&p);
for(i=1; i<=n; i++){
  if (i%2 ==1)
  {
   printf("%d",i);
   continue;
  } 
}
for ( i = 1; i <= n; i++)
{
  if (i%2 == 0)
  {
    printf("%d",i);
  }
  
}


  return 0;
}