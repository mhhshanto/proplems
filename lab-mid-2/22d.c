#include <stdio.h>
int main(){
  int row, col, i, j;
int mat[10][10];
scanf("%d%d", &row,&col);

for (i = 0; i < row; ++i) {
    for (j = 0; j < col; ++j) {
        scanf("%d", &mat[i][j]);
    }
}   
for (i = 0; i < row; i++) {  
    for (j = 0; j < col; j++) {  
        if(mat[i][j] == i+1 && mat[i][j] == j+1){
         mat[i][j] += 3;
        }else if (mat[i][j] == i+1 && mat[i][j] != j+1)
        {
          mat[i][j] += 2;
        }else if (mat[i][j] != i+1 && mat[i][j] == j+1)
        {
          mat[i][j] += 1;
        }
        
    }   
}  
for (i = 0; i < row; ++i) {
    for (j = 0; j < col; ++j) {
        printf("%d ", mat[i][j]);
    }
    printf("\n");
} 
return 0;
}  