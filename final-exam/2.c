#include <stdio.h>
int main(){
  int ln,i;
  scanf("%d",&ln);
  int arr[100];
  arr[0]=0;
  arr[1]=1;
  for ( i = 2; i < ln; i++)
  {
    arr[i] = arr[i-1]+arr[i-2];
  }
  for ( i = 0; i < ln; i++)
  {
    printf("%d, ",arr[i]);
  }
 return 0; 
}