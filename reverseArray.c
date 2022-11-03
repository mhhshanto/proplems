#include <stdio.h>
int main(){
  int i,l=5;
  int a[5]={5,6,7,12,1};
  
  for(i=l-1; i>=0; i--){
    printf("%d,",a[i]);
  }
  return 0;
}