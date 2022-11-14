#include <stdio.h>
int main(){
int a [3] [3],i,j, sumd1=0, sumd2=0, f=0, sumr=0, sumc=0;
for (i=0; i<3;i++)
{
for(j=0; j<3; j++)
{
scanf("%d", &a[i][j]);
}
    
 }
for ( i = 0; i < 3; i++)
{
  for ( j = 0; j < 3; j++)
  {
    if (i==j)
    {
      sumd1 = sumd1 + a[i][j];
    }
    if (i+j== 3-1)
    {
      sumd2 = sumd2 + a[i][j];
    }
    
    
  }
  
}
if (sumd1!= sumd2)
{
  f=1;
}else{
  for ( i = 0; i < 3; i++)
  { sumc = 0;
    sumr = 0;
    for ( j = 0; j < 3; j++)
    {
      sumc = sumc + a[i][j];
      sumr = sumr + a[i][j];
    }
    if (sumc != sumd1)
    {
      f=1;
    }else if(sumr != sumd1){
      f=1;
    }else{
      f=0;
    }
    
  }
  
}

if (f==0)
{
  printf("This is a magic matrix");
}else{
  printf("This is not magical matrix");
}

return 0;
}