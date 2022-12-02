#include <stdio.h>
void avg(int a,int b, float *avr,int *sum ){
*sum = a+b;
*avr = (*sum)/2;
}
int main(){
  float avr;
  int a,b,sum;

  scanf("%d%d",&a,&b);
  avg(a,b,&avr,&sum);
  printf("%f",avr);
  return 0;
}