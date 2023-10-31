// practical 60: C program to create and use a structure for a student data.

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
    
    printf("Enter The Information of Students :\n\n");
        
    printf("Enter Name : ");
    scanf("%s",s.name);
        
    printf("Enter Roll No. : ");
    scanf("%d",&s.roll);
        
    printf("Enter marks : ");
    scanf("%f",&s.marks);
        
    printf("\n--------------- Displaying Information ---------------\n");
        
    printf("Student's Name: %s\n",s.name);
    printf("Student's Roll: %d\n",s.roll);
    printf("Student's Marks: %.2f\n",s.marks);
    return 0;
}