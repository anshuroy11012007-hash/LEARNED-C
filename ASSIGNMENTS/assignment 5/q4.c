#include<stdio.h>
#include<string.h>
int main()
{
    char arr[60];
    int a =13,b = 25,c;
    c = a+ b;
    sprintf(arr,"sum of %d and %d is %d", a, b, c);
    printf("%s",arr);
    return 0;
}