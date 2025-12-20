#include <stdio.h>
int main()
{
    int num, i, sum;
    printf("what triangular that you want");
    scanf("%d",&num);
    sum=0;
    for(i=1;i<=num;i++){
        sum+=i;
    }
    printf("the %dth tringular number is %d\n",num, sum);
    return 0;
}