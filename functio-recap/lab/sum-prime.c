#include <stdio.h>
int is_prime(int b){
for (int i = 2; i < b; i++)
{
  if (b%i == 0)
  {
    return 0;
  }
  
}
return 1;
}
int sum(int a){
int summ = 0;
while (a>0)
{
  summ += a%10;
  a= a/10;
}
return summ;
} 
int main(){
  int n;
  scanf("%d",&n);
  if (is_prime(sum(n))== 1)
  { 
    printf("shantos number");
  }else{
    printf("no");
  }
  
  
  return 0;
}