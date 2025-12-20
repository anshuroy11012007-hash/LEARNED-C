#include<stdio.h>
int main()
{
    int count=1;
    int n;
    printf("please enter till where you want to see counting:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("BAD RESPONSE!\n PLEASE ENTER ANOTHER NUMBER:");
    }
    while (count <=n)
    {
        printf("%d\n",count);
        count++;
    }
    return 0;
}