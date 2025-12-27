#include<stdio.h>
int prime(int n)
{
    int i;
    if (n<=1)
    {
        return 0;
    }
    for(i = 2; i<= n/2; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("please enter a number\n");
    scanf("%d",&num);
    if (prime(num) == 1)
    {
        printf("%d is a prime number",num);
    }
    else{
        printf("not a prime number");
    }
    return 0;
}