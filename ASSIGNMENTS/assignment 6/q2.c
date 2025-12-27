#include<stdio.h>
int fib(int num)
{
    if (fib == 0)
    {
        return 0;
    }
    if (fib == 1)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}
int main()
{
     int n,result;
    printf("please enter number till where you want to see fibonaki series\n");
    scanf("%d",&n);
    if (n<0)
    {
        printf("ERROR");
    }
    else
    {
        result=fib(n);
        printf("series is %d",result);
    }
    return 0;
}