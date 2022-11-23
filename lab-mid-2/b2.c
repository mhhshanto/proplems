#include <stdio.h>
int main(){
  int i;
  int arr[1000];
  int score = 3552345;
  int ln = 7;
  for(i= 0; i<ln; i++)
{
  arr[i]= score % 10;
    // printf("%d\n", score % 10);
    score /= 10;
}
for ( i = 0; i < ln; i++)
{
  printf("%d",arr[i]);
}
 int temp;
    for(int i = 0; i<ln/2; i++){
        temp = arr[i];
        arr[i] = arr[ln-i-1];
        arr[ln-i-1] = temp;
    }
    for(int i = 0; i < ln; i++){
        printf("%d,", arr[i]);
    }
return 0;
}