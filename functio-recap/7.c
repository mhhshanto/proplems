#include <stdio.h>
int main(){
  int arr[100];
  int ln;
  scanf("%d",&ln);
  for (int i = 1; i <= ln; i++)
  {
    scanf("%d",&arr[i]);
  }
  int quary;
  scanf("%d",&quary);
  for ( int i = 0; i < quary; i++)
  {
    int a,b;
    scanf("%d%d",&a,&b);
    int swap = arr[a];
    arr[a] = arr[b];
    arr[b] = arr[swap];
  }
  for (int i = 1; i <= ln; i++)
  {
    printf("%d ",arr[i]);
  }
   
  return 0; 
}