#include <stdio.h>
struct student{
  int roll;
  char name[50];
  double mark;
};
int main(){
  struct student cls[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d",&cls[i].roll);
    scanf("%s",cls[i].name);
    scanf("%lf",&cls[i].mark);
  }
  
  for (int i = 0; i < 5; i++)
  {
    printf("Information of student-%d\n",i);
    printf("roll-%d\n",cls[i].roll);
    printf("name-%s\n",cls[i].name);
    printf("mark-%.2lf\n",cls[i].mark);
  }
  return 0;
}
// 1 
// a
// 5.77
// 2 b 5.55
// 3 c 5.77
// 4 d 6.66
// 5 e 9.55