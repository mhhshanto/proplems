#include<stdio.h>
int main()
{
    int num1, num2,maxx;
    num1 = 5;
    num2 = 7;
    maxx = num1 >= num2 ? num1 : num2; 
    printf("%d",maxx);
    return 0;
}