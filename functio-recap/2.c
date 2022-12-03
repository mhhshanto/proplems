#include <stdio.h>
#include <string.h>
int main(){
  int i;
  char str[100];
  scanf ("%s",&str);
  int ln = strlen(str);

 for (int step = 0; step < ln - 1; ++step) {
      
    for (int i = 0; i < ln - step - 1; ++i) {
      
      if (str[i] < str[i + 1]) {
        
        int temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
      }
    }
  }

  for ( i = 0; i < ln; i++)
  {
    printf("%c",str[i]);
  }
  return 0;
}