#include <stdio.h>
#include <string.h>
union data
{
    int p1;
    float p2;
    char p3[20];
};
int main()
{
    union data data;
    printf("Memory size occupied by union: %zu bytes\n\n", sizeof(data));
    data.p1 = 10;
    printf("assigned integer is %d\n",data.p1);
    data.p2 = 20.345612;
    printf("%d\n",data.p1);//data comes as weird combination of numbers instead of 10.
    printf("assigned float value upto 3 digit decimal is %.3f\n",data.p2);
    strcpy(data.p3, "Adrija");
    printf("assigned string is %s",data.p3);
    return 0;
}