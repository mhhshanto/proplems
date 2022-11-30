#include<stdio.h>
void hash(int n){
  int i;
  for ( i = 0; i < n; i++)
  {
    printf("*");
  }
  printf("\n");
}
int main()
{
  int i;
  for ( i = 0; i <=5 ; i++)
  {
   hash(i);
  }
  
    return 0;

}