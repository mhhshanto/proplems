#include <stdio.h>
int main(){
  int n,i;
 
  scanf("%d",&n);
    int neg = n < 0 ? n : -n;
  printf("\n%d",neg);
  for(i=n; n>= 0; n--){
    printf("%d",n);
  }
 
  return 0;
}   