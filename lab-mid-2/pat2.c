#include <stdio.h>
int main(){
  int i,j,n,c=1;
  scanf("%d",&n);
  for ( i = 1; i <= n; i++)
  {
    printf("%d",i);
  }
  printf("\n");
  
  for ( i = 2; i < n; i++)
  {
    for(j = 1; j<= n; j++){
       {
           if (j == 1)
           {
            c+=1;
            printf("%d",c);   
           }else if (j == n)
           {
            printf("%d",j);
           }
           
           else{
            printf(" ");
           }                       
        }
    }
    printf("\n");
  }
  for ( i = 0; i < n; i++)
  {
    printf("%d",n);
  } 
  return 0;
}