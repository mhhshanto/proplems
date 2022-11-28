#include <stdio.h>
int get_grade(i){
if (i>= 80 && i<=100)
{
  return 1;
}else if (i>= 60 && i<=79)
{
  return 2;
}else if (i>= 40 && i<=59)
{
  return 3;
}else
{
  return 4;
}
return 0;
} 
int main(){
  int i;
  scanf("%d",&i);
  int grade = get_grade(i);
if (grade == 1)
{  
  printf("A");
} else if (grade == 2)
{  
  printf("B");
}else if (grade == 3)
{
  printf("C");
}else if (grade == 4)
{
  printf("F");
} 
return 0;
}