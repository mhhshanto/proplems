#include <stdio.h>
int main(){
  int i,j,n=5,c=1;
  // scanf("%d",&n);
  for ( i = 1; i <= n; i++)
  {
    for(j = 1; j<= n; j++){
       {
            if(j==5 || i==1 || i==5){
               printf("%d",j);
                }else if (j==1)
                {
                  c+=1;
                  printf("%d",c);
                }
                
            else{
              printf(" ");
            }                
        }
    }
    printf("\n");
  }
  return 0;
}