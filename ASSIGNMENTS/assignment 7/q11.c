#include <stdio.h>
struct student 
{
    char name[20];
    int roll_no;
    int marks;
};
int main()
{
    int *ptr;
    struct student s;
    {
        printf("please enter the name of the student\n");
        scanf("%s",&s.name);
        printf("please enter the roll number of the student\n");
        scanf("%d",&s.roll_no);
        printf("please enter the marks of the student\n");
        scanf("%d",&s.marks);
    };
    ptr=&s.name;
    printf("please enter the correct name of student\n");
    scanf("%p",&*ptr);
    printf("details are:\n");
    printf(" NAME: %p\n",*ptr);
    printf(" ROLL NUMBER: %d\n",s.roll_no);
    printf(" MARKS: %d\n",s.marks);
    return 0;
}