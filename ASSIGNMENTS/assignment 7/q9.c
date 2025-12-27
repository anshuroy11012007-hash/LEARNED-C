#include<stdio.h>
struct empsal
{
    char name[50];
    int id;
    float gross_salary;
    float HRA;
    float travel_allowence;
};
int salary(float gross_salary, float HRA, float travel_allowence)
{
    float sal = gross_salary - (HRA + travel_allowence);
    return sal;
}
int main()
{
    struct empsal s;
    {
        printf("please enter employee name\n");
        scanf("%s", &s.name);
        printf("please enter employee id\n");
        scanf("%d",&s.id);
        printf("please enter employee gross salary\n");
        scanf("%f",&s.gross_salary);
         printf("please enter employee HRA\n");
        scanf("%f",&s.HRA);
         printf("please enter employee travel allowence\n");
        scanf("%f",&s.travel_allowence);
    };
    printf("\n");
    float employee_salary = salary(s.gross_salary,s.HRA,  s.travel_allowence);
    printf("employees salary is %f",employee_salary);
    return 0;
}