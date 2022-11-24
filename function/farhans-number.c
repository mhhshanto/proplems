#include <stdio.h>
int check_seven(n){
  while (n>0)
  {
    if(n%10 == 7){
      return 1;
    }
    n/= 10;
  }
  return 0; 
}
int sum(n){
  int sum;
  while (n>0)
  {
    sum+= n%10;
    n/= 10;
  }
  return sum;
  
}
int last_prime(n){
  if (n%10== 2 || n%10 == 3 || n%10 == 5 || n%10 == 7)
  {
    return 1;
  }else{
    return 0;
  }
  
}
int main(){
  int n;
  scanf("%d",&n);
  if (check_seven(n) == 1 && sum(n) > 10 && last_prime(n) == 1)
  {
    printf("this is farhan's number");
  }else{
    printf("ghapla ase");
  }
  
  return 0;
}