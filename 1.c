#include <stdio.h>
#include <stdlib.h>
struct num
{ int x;
  int y; };

int manhatten(struct num s1,struct num s2){
  int res = abs(s1.x-s2.x)+abs(s1.y-s2.y);
  return res;
};

int main(){
struct num s1;
struct num s2;
scanf("(%d,%d)\n",&s1.x,&s1.y);
scanf("(%d,%d)",&s2.x,&s2.y);
int ans = manhatten(s1,s2);
printf("%d",ans);
};




































