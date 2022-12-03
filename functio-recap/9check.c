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
  int sum;
  for (int i = 0; i < ln; i++)
  {
    sum += arr[i];
  }
  printf("%d..",sum);
  return sum/ln;
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