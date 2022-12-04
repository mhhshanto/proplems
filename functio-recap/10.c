#include <stdio.h>
int main(){
  int count= 0;;
  int arr[100];
  int ln;
  int half;
  scanf("%d",&ln);
  if (ln%2 == 0)
  {
    half = ln/2;
  }else{
    half = (ln+1)/2;
  }
  for (int i = 0; i < ln; i++)
  {
    scanf("%d",&arr[i]);
  }
  for (int i = 0; i < ln; i++)
  {
    int flag = 0;
   for (int j= 0; j<arr[i]; j++)
   {
    if (arr[i]%10 == 7)
    {
      flag++;
    } 
    arr[i] /= 10;
   }
   if (flag > 0)
   {
    count ++;
   }
   
    flag = 0;
  }
  if (count >= half)
  {
    printf("Beautiful");
  }
  else{
    printf("ugly");
  }
  return 0;
}