#include <stdio.h>
int main(){
  int i,j;
  int arr[]={12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
  int size = 11;
for ( i = 0; i < 5; i++){
  for ( j = 0; j < size-1; j++){
    if (arr[j]>arr[j+1]){
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1]= temp;
    }  }  }
  for ( i = 0; i < 11; i++)
  {
    printf("%d, ",arr[i]);
  } 
  return 0;
}

