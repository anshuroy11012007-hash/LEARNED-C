#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("please enter 2 numbers a and b\n");
    scanf("%d%d",&a,&b);
    int *ptr = &a;
    int *ptr_1 = &b;
    sum = *ptr + *ptr_1;
    int *ptr_2 = &sum;
    printf("%d",sum);
    return 0;
}