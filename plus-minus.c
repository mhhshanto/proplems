#include <stdio.h>
#include <math.h>
int main(){
  int i;
  int sum = 0;
  for(i=0;i<=100;i++){
    if (i%2 == 0)
    {
      sum += pow(i,2);
    }else{
      sum-= pow(i,2);
    }
     
  }
  printf("%d",sum);
  return 0;
}