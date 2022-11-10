#include <stdio.h>
#include <string.h>
int main(){
  int i;
  char arr[102],brr[102];
  fgets(arr,sizeof(arr),stdin);
  fgets(brr,sizeof(brr),stdin);
  int a=0,b=0;
  for ( i = 0; i < strlen(arr)-1; i++)
  {
    if (arr[i]<96)
    {
      arr[i]+=32;
    }   
  }
  for ( i = 0; i < strlen(brr)-1; i++)
  {
    if (brr[i]<96)
    {
      brr[i]+=32;
    }   
  }
  for ( i = 0; i < strlen(brr)-1; i++)
  {
    b+=brr[i];
    
  }
  for ( i = 0; i < strlen(arr)-1; i++)
  {
    a+=arr[i];
    
  }
  if (b==a)
  {
    printf("0");
  }else if (a>b)
  {
    printf("1");
  }else{   
    printf("-1");
  }
  
  

return 0; 
}