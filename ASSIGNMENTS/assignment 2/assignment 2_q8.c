#include <stdio.h>
int main()
{
    int i,n,sum;
    printf("please enter the number of natural numbers whose sum you need\n");
    scanf("%d",&n);
    sum = 0;
    for(i=1;i<=n;i++){
        sum = sum + i;
        printf("sum of digits is %d\n",sum);
    }
    return 0;
}