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
int p= 0;
int i;
for ( i = 1; i < m ; i++)
{
  if (m % i == 0 && n % i == 0)
  {
    return i;
}
    }
    return 0;
} 

int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  int m = facto(a);
   int n = facto(b);
  int fact = rat(m,n);
  printf("%d",fact);
  return 0;
}