#include <stdio.h>
struct student
{
    char name[50];
    float mfcp;
    float mmaths;
    float mieee;
    float meng;
    float mfl;
};
float total_marks(float mfcp,float mmaths,float mieee,float meng,float mfl)
{
    float mtotal = mfcp + mmaths + mieee + meng + mfl;
    return mtotal;
}
float average(float mtotal)
{
    float avg = mtotal/500;
    return avg;
}
int main()
{
    struct student s;
    {
        printf("please enter student name\n");
        scanf("%s", &s.name);
        printf("please enter marks in fcp\n");
        scanf("%f",&s.mfcp);
        printf("please enter marks in maths\n");
        scanf("%f",&s.mmaths);
        printf("please enter marks in english\n");
        scanf("%f",&s.meng);
        printf("please enter marks in IEEE\n");
        scanf("%f",&s.mieee);
        printf("please enter marks in fl\n");
        scanf("%f",&s.mfl);
    };
    float marks_total = total_marks(s.mfcp,s.mmaths,s.mieee,s.meng,s.mfl);
    float average_marks = average(marks_total);
    printf ("%s's total marks are %f\n", s.name, marks_total);
    printf ("%s's avereage marks are %f\n", s.name, average_marks);
    return 0;
}