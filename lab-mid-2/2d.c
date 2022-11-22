#include <stdio.h>
int main(){
  int i,j,m,n;
  int arr[m+1][n+1];
  scanf("%d%d",&m,&n);
  for ( i = 1; i < m+1; i++)
  {
    for ( j = 0; j < n+1; j++)
    {
      scanf("%d",&arr[i][j]);
    }
    
  }
  for ( i = 1; i < m+1; i++)
  {
    for ( j = 0; j < n+1; j++)
    {
      printf("%d",&arr[i][j]);
    }
    
  }
  
 return 0; 
}