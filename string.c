#include <stdio.h>
#include <string.h>
int main(){
  int i,n;
  char arr[100];
  fgets(arr,sizeof(arr),stdin);
  n=strlen(arr)-1;
  for ( i = 0; i < n; i++)
  {
   if (arr[i] < 95 )
   {
    arr[i]+= 32;
   }
   
  }
  for ( i = 0; i < n; i++)
  {
    if (arr[i] == 'a' || arr[i] == 'o' || arr[i] == 'y' || arr[i] == 'e' || arr[i] == 'u' || arr[i] == 'i' )
    {
      
    }else{
      printf(".%c",arr[i]);
    }
    
  }
  
 return 0; 
}