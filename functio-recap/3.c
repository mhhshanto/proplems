#include <stdio.h>
int main(){
    int *ptrX,*ptrY;
    int x,y;
    scanf("%d%d",&x,&y);
    ptrX = &x;
    ptrY = &y;
    printf("%d %d", *ptrX,*ptrY);
    return 0;
}