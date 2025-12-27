#include<stdio.h>
int main()
{
    char name[]="adrija";
    int *ptr = &name[2];
    printf("array is %s\n", name);
    printf("date in 3th memory of sting is %c\n",*ptr);
    printf("location of r in array is %p\n",ptr);
    return 0;
}