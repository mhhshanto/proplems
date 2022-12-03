#include <stdio.h>
#include <string.h>
int main(){
  char arr[100];
  
  scanf("%s",&arr);
  int ln = strlen(arr);
  
  for (int i = 0; i <ln; i++)
  {
    if (i>0 && i%2 == 1)
    {
      printf("%c",arr[i]);
      printf("%c",arr[i]);
    }else{
       printf("%c",arr[i]);
    }
  } 
  return 0;
}