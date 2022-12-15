#include <stdio.h>
// int main(){
//   FILE *inputFile;
//   inputFile = fopen("input.txt","r");
//   if (inputFile == NULL)
//   {
//     printf("no file found");
//   }
//   FILE *outputFile;
//   outputFile = fopen("output.txt","w");
//   while (1)
//   {
//     char ch = fgetc(inputFile);
//     if (ch == EOF)
//     {
//       break;
//     }
//     fputc(ch,outputFile);
//   }
  

//   return 0;
// }
int main(){
  FILE *input;
  input = fopen("input.txt","r");
  if (input == NULL)
  {
    printf("no file found");
  }
  FILE *output;
  output = fopen("output.txt","w");
  while (1)
  {
    char ch = fgetc(input);
    if (ch == EOF)
    {
      break;
    }
    fputc(ch,output);
  }
  
}