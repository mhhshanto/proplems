#include <stdio.h>
int sum(int b,int a){
  if(b>0){
   return (b*a)+sum(n-1,a);
  }else {
    return 0;
  };
}; 
int main(){
  int b,a;
  scanf("%d %d",&b,&a);
  int res = sum(b,a);
  printf("%d",res);
  return 0;
}    