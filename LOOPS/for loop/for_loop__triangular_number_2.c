#include <stdio.h>
int main()
{
    int i,num,sum,counter;
    for(counter=1;counter<=5;counter++){
        printf("what tringular number do you want");
        scanf("%d",&num);
        sum=0;
        for(i=1;i<=num;i++){
            sum+=i;
        }
        printf("the %dth triangular number is %d\n",num, sum);
    }
    return 0;
}