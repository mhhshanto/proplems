#include<stdio.h>  
 int main()    
{    
int n,sum,m;    
printf("Enter a number:");    
scanf("%d%d",&n);    
while(n>0)    
{    
m=n%10;    
sum+= m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}   