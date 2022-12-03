#include <stdio.h>
int summ(int n,int arr[100]){
  int i,sum=0;
for ( i = 1; i <= n; i++)
  {
    if (arr[i]%2 == 0 && i%2 == 0)
    {
      sum+= (arr[i]+i);
    }else if (arr[i]%2 == 1 && i%2 == 1)
    {
     sum+= (arr[i]+i);
    } 
  } 
  return sum;
}
int main(){
  int arr[100];
  int i,n;
  scanf("%d",&n);
  for ( i = 1; i <= n; i++)
  {
    scanf("%d",&arr[i]);
  } 
  int s=summ(n,arr);
  printf("%d",s);
return 0;
}