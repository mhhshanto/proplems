#include <stdio.h>
int main(){
  int n,i;
  scanf("%d",&n);
  printf("The factors of %d are ",n);
   for (i=1; i<=n; ++i)
  {
    if (n % i == 0){
     if (n>i)
     {
      printf("%d, ", i);
     }else{
      printf("%d.", i);
     }
    }
  }
 return 0;
}