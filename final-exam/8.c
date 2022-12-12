#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s;
    
 printf("Enter Information:\n");
    
 printf("Enter Name: ");
    scanf("%s",s.name);
    
 printf("Enter Roll Number: ");
    scanf("%d",&s.roll);
    
    printf("Enter marks: ");
    scanf("%f",&s.marks);
    
    printf("\nDisplaying Information\n");
    
 printf("Name: %s\n",s.name);
    printf("Roll number: %d\n",s.roll);
    printf("Marks: %.2f\n",s.marks);
    return 0;
}