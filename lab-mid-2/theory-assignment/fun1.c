#include <stdio.h>
int chk(long long int s,int y){
while (s != 0)
{
  if(s%10 == y){
    return 1;
  }
  s= s/10;
}
return 0; 
}   
int main(){
  long long int s;
  scanf("%lld",&s);
  int p1 = chk(s,1);
  int p2 = chk(s,9);
  int p3 = chk(s,7);
  if (p1 == 1 && p2 == 1 && p3 == 1)
  {
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}