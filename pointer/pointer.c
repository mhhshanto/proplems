#include <stdio.h>
void func(int y,int x,int* l,int* m){
if (y>x)
{
  *l = y;
  *m = x;
}else{
  *l=x;
  *m=y;
}

}
int main(){
  int a = 50,b=12;
  int large,small;
  func(a,b,&large,&small);
  printf("%d %d",large,small);
  return 0;
}