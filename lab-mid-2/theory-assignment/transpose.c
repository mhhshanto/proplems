#include <stdio.h>
int main(){
  int A[10][10],tran[10][10],i,j,row,col;
  scanf("%d %d",&row, &col);
  for ( i = 0; i < row; i++)
  {
    for ( j = 0; j < col; j++)
    {
      scanf("%d",&A[i][j]);
    }
    
  }
  for ( i = 0; i < row; i++)
  {
    for ( j = 0; j < col; j++)
    {
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  for ( i = 0; i < row; i++)
  {
    for ( j = 0; j < col; j++)
    {
      tran[j][i] = A[i][j];
    }
  }
  for ( i = 0; i < col; i++)
  {
    for ( j = 0; j < row; j++)
    {
      printf("%d ",tran[i][j]);
    }
    printf("\n");
  }
  return 0;
}