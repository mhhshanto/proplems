#include <stdio.h>
int sum(int *a,int *b){
   int su = *a + *b;
  return su;
}
int main(){
  int a=5;
  int b=10;
  int res = sum(&a,&b);
  printf("%d",res);
  return 0;
}