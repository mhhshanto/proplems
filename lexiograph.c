#include <stdio.h>
#include <string.h>
int main() {
  int i;
   char str[50], temp[50],p[50];
      fgets(str, sizeof(str), stdin);
      fgets(temp, sizeof(temp), stdin);
   for ( i = 0; i < strlen(temp)-1; i++)
   {
    if (str[i]>temp[i])
    {
      for ( i = 0; i <strlen(temp)-1 ; i++)
      {
        printf("%c",temp[i]);
      }
      break;
      
    }else if (temp[i]>str[i])
    {
      for ( i = 0; i <strlen(str)-1 ; i++)
      {
        printf("%c",str[i]);
      }
      break;
    }   
   } 
   return 0;
}