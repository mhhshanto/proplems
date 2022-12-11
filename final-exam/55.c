#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int n, i;
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
    }
    else {
        for (i = 0; i < n; ++i) {
          scanf("%d",&ptr[i]);
        }
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
    return 0;
}