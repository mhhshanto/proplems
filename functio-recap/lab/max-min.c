#include <stdio.h>
void max_min(int n,int num[],int *p,int *q){
*p = num[0];
*q = num[0];
for (int i = 0; i < n; i++)
{
  if (num[i]> *p)
  {
    *p = num[i];
  }
  if (num[i]< *q)
  {
    *q = num[i];
  }

}

}
int main(){
int ara[]= {3,5,6,2,1,7,8};
int n=7;
int maxx,minn;
max_min(n,ara,&maxx,&minn);
printf("%d %d",maxx,minn);
  return 0;
}    