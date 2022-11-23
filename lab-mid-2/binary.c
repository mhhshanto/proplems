#include <stdio.h>
int main(){
  int i,n,ln;
  char num[1000];
  int cou = 0;
  scanf("%d",&n);
  for ( i = 1; i <= n; i++)
  {
    scanf("%d",&ln);
    scanf("%s",&num[1000]);
    
      for(i=0; i<ln; i++){
      if (num[i] != num[i-1])
      {
        cou+=1;
      }
      
    }
    printf("%d",cou);
  }
  return 0;
}