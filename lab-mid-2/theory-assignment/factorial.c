#include <stdio.h>
int facto(x){
  int i;
  int factt = 1;
  for ( i = 1; i <= x; i++)
  {
    factt *= i;
  }
  return factt;
}

int rat(int m,int n){
  if (m>n)
  {
    return m/n;
  }else{
    return n/m;
  }
  
    return 0;
} 

int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  int m = facto(a);
   int n = facto(b);
  int fac = rat(m,n);
  printf("%d",fac);
  return 0;
}