#include <stdio.h>
#include <string.h>
int main(){
  int i;
  char s[100];
  scanf("%s",&s);
  int ln = strlen(s);
  for ( i = 0; i < ln; i++)
  {
    if (s[i]>96)
    {
      s[i]-=32;
    }else{
      s[i]+= 32;
    }   
    printf("%c",s[i]);
  }
  return 0;
}