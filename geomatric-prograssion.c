#include <stdio.h>
int main(){
  int i;
  int arr[15];
  for ( i = 1; i <=15; i++)
  {
    if (i<2)
    {
      arr[i]=i;
    }else{
      arr[i] = arr[i-1]*2;
    }
    printf("%d ",arr[i]);
  }
  
  return 0;
}