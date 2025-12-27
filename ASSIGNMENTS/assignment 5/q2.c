#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    int a = strlen(str);
    printf("%d",a);
    printf("original string %s",str);
    str[3]= 'c';
    printf("updated strings = %s",str);
    return 0;
}