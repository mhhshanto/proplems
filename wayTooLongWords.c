#include <stdio.h>
#include <string.h>

int main(){
  char name[100];
  int n,i;
  scanf("%d",&n);
  
  
 for ( i = 0; i < n; i++)
 {
  fgets(name,sizeof(name),stdin);
   int l = strlen(name)-1;
   if (l>10)
  {
    printf("%c%d%c\n",name[0],l-2,name[l-1]);
  }else{
    printf("%s\n", name);
  }
 }
 
 return 0; 
}
