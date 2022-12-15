#include <stdio.h>
int main(){
  FILE *input;
  FILE *output;
  input = fopen("input.txt","r");
  output = fopen("output.txt","w");
  if (input == NULL)
  {
    fprintf(output,"no file found");
    return 0;
  }
  int n;
  int sum = 0;
  fscanf(input,"%d",&n);
  for (int i = 0; i < n; i++)
  {
    int a;
    fscanf(input,"%d",&a);
    sum += a;
  }
  fprintf(output,"%d",sum);
  
  
  return 0;
} 