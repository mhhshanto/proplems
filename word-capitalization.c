#include <stdio.h>
#include <string.h>
int main(){
  int i;
char st[100];
fgets(st,sizeof(st),stdin);
int n =strlen(st);
if (st[0]>96)
{
  
  if (n<10)
  {
    printf("%c",st[0]-32);
    for ( i = 1; i <n; i++)
  {
    printf("%c",st[i]);
  }
  
  }else{
    printf("YES");
  }
  
}else{
  printf("%s",st);
}

return 0;
}