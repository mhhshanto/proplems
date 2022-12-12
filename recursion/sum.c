#include <stdio.h>
int sum(int n){
  if(n>0){
   return n*sum(n-1);
  }else {
    return 1;
  };
};
int main(){
  int n;
  scanf("%d",&n);
  int res = sum(n);
  printf("%d",res);
  return 0;
}    