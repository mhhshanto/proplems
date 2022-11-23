#include <stdio.h>
int main(){
  int i,n;
  int tempplus = 0;
  int tempMinus = 0;
  scanf("%d",&n);
  char arr[100];
  scanf("%s",arr);
  for ( i = 0; i < n; i++)
  {
    if (arr[i] == '-' && arr[i+1]== '-')
    {
      tempMinus+=1;
      if (tempMinus > tempplus)
      {
        tempplus = 0;
      }
      
    }else if (arr[i] == '+' && arr[i+1])
    {
      tempplus += 1;
      if (tempMinus < tempplus)
      {
        tempMinus = 0;
      }
    }
  }
  if (tempplus > tempMinus)
  {
    printf("%d",tempplus);
  }else{
    printf("%d",tempMinus);
  }
  
  return 0;
}