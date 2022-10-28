#include <stdio.h>
int main() {
    int n,i,p;
  scanf("%d",&n);
  for(i=2; i<n; i++){
    if(n%i == 0){
   p++;
    }
  }
  if(p==34){
printf("Prime ");
  }else{
    printf("Composite ");
  }
    return 0;
}
