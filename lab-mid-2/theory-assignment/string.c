#include <stdio.h>
#include <string.h>
int main(){
  int i,k;
  char s[100];
  scanf("%s",&s);
  scanf("%d",&k);

  int l = strlen(s);
  for ( i = 0; i < l; i++)
  {
    if (s[i]<96)
    {
      s[i]+=32;
    } 
  }
  for ( i = 0; i < l; i++)
  {
    if (s[i]=='z')
    {
      s[i]='e';
    }else if (s[i]=='y')
    {
      s[i]='d';
    }else if (s[i]=='x')
    {
      s[i]='c';
    }else if (s[i]=='w')
    {
      s[i]='b';
    }else if (s[i]=='v')
    {
      s[i]='a';
    }
    else{
      s[i]+= k;
    }
  } 
 printf("%s",s);
}