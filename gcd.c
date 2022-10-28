#include <stdio.h>
int main(){
 int i,m,n,num;
 scanf("%d%d",&m,&n);
 for (i = 1; i<=m && i<=n; ++i)
 {
   if(n%i == 0 && m%i == 0){
  num =i;
   }
 }
 printf("The LCM of %d and %d is %d",m,n,(m*n)/num);
 
 return 0;
}
