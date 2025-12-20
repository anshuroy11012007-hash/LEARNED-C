#include <stdio.h>
int main()
{
    int i,k,sum;
    sum=0;
    k=1;
    for(i=1;i<=20;i++){
        sum+=k;
        k+=2;
        printf("i=%d, sum=%d, k=%d\n",i, sum, k);
    }
    
    return 0;
}