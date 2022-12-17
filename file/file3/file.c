#include <stdio.h>
int main(){
  FILE *log;
  FILE *input;
  input = fopen("input.txt","r");
  log = fopen("log.txt","a");
  if (input == NULL)
  {
    fprintf(log,"no input file found \n");
    return 0;
  }
  return 0;
}