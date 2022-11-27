#include <stdio.h>
int main(){
  int arr[20];
  int i,n,j,temp;
  float median;
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
 for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(arr[j]>arr[j+1]){
                temp        = arr[j];
                arr[j]    = arr[j+1];
                arr[j+1]  = temp;
            }
        }
    }
   if(n%2 == 0)
        median = (arr[(n-1)/2] + arr[n/2])/2.0;
    else
        median = arr[n/2];  
        printf("\n\nmedian is : %f\n",median);
}