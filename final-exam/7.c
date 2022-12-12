#include <stdio.h>
int main() {
  int row, c, a[100][100], b[100][100], sum[100][100], i, j;
  scanf("%d", &row);
  scanf("%d", &c);
  for (i = 0; i <row; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &a[i][j]);
    }
  for (i = 0; i <row; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i <row; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  for (i = 0; i <row; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

 return 0;
}
