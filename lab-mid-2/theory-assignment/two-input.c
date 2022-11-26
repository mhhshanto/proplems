#include <stdio.h>
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
int main(){
  int i,j;
  scanf("%d%d",&i,&j);
  int res = add_three_nums(i,j,0);
  printf("%d",res);
  return 0;
}