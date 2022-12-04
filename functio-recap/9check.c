#include <stdio.h>
int is_prime(int ln,int arr[100]){
  int count= 0;
for (int i = 0; i < ln; i++)
{
  int p = 0;
  for (int j = 2; j < arr[i]; j++)
  {
    if ( arr[i]%j == 0)
    {
      p++;
  }
  }
  if (p>0)
  {
    count += 1;
  }
  p = 0;
}
return ln-count;
}
float avg(int ln,int arr[100]){
  int sum=0;
  int devide_by = 0;
  for (int i = 0; i < ln; i++)
  {
    if(arr[i]%2 == 0){
      sum += arr[i];
      devide_by ++;
    }
  }
  return sum/devide_by;
}  
int main(){
  int arr[100];
  int ln;
  scanf("%d",&ln);
  for ( int i = 0; i < ln; i++)
  {
    scanf("%d",&arr[i]);
  }
float av = avg(ln,arr);
int s = is_prime(ln,arr);
printf("Prime numbers: %d \n",s);
printf("Average of all even integers: %f",av);
 return 0; 
}