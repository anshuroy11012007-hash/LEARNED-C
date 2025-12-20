#include <stdio.h>
int main ()
{
    char x;
    printf("please enter a number\n\n");
    scanf("%d",&x);
    if (x%3==0)
        {
            printf("x is a multiple of 3");
        } 
    else
        {
            printf("x is not a multiple of 3");
        }
    return 0;
}