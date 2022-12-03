#include <stdio.h>
int is_prime(int ln,int arr[100]){
  int count= 0;
for (int i = 0; i < ln; i++)
{
  for (int j = 2; j < arr[i]; j++)
  {
    if ( arr[i]%j == 0)
    {
      arr[i]= 0;
  }
  }
}
for (int i = 0; i < ln; i++)
{
  if(arr[i] != 0){
    count ++;
  }
}
return count;
}

float avg(int ln,int arr[100]){
  int sum = 0;
  for (int i = 0; i < ln; i++)
  {
    sum+= arr[i];
  }
  return sum;
}

int main(){
  int arr[100];
  int ln;
  scanf("%d",&ln);
  for ( int i = 0; i < ln; i++)
  {
    scanf("%d",&arr[i]);
  }

float avg = is_prime(ln,arr);
int s = is_prime(ln,arr);

printf("Prime numbers: %d",s);
printf("Average of all even integers: %f",avg);
 return 0; 
}