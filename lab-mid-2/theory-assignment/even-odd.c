#include <stdio.h>
int main(){
  int i,n,k,p;
  int arr[100];
  scanf("%d%d",&n,&k);
  if (n%2 == 0)
  {
    p= n/2;
  }else{
    p = (n-1)/2;
  }
  int q = 2;
  int r=1;
  for ( i = 0; i <p; i++)
  {
    arr[i] = q;
    printf("%d ",arr[i]);
    q+=2;
  }
  for ( i = p; i < n; i++)
  {
    arr[i]= r;
    printf("%d ",arr[i]);
    r+=2;
  }
  printf("\n%d",arr[k-1]);
  return 0;
}
