#include <stdio.h>
int chk_three(int n,int arr[]){
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]%3 == 0 && arr[i] % 5 != 0)
    {
      c++;
    }
  }
  return c;
}
int chk_five(int n,int arr[]){
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]%5 == 0)
    {
      c++;
    }
  }
  return c;
}
int main(){
  int n,i;
  int arr[102];
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  int three = chk_three(n,arr);
  int five = chk_five(n,arr);
 if (three+five == 0)
 {
  printf("-1");
 }else{
   printf("%d",three+five);
 }
  return 0;
}