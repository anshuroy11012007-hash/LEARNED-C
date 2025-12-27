#include <stdio.h>
struct ece
{
    char name[50];
    int roll_no;
    float marks;
};
int main()
{
    struct ece e;
    {
        printf("enter students name\n");
        scanf("%s",&e.name);
        printf("enter students roll number\n");
        scanf("%d",&e.roll_no);
        printf("enter students marks\n");
        scanf("%f",&e.marks);
    };
    printf("\n");
    printf("name is %s\n",e.name);
    printf("roll no. is %d\n",e.roll_no);
    printf("marks are %f\n",e.marks);
    return 0;
}
