#include <stdio.h>
int main()
{
    int i,k,sum,n;
    printf(" PLEASE ENTER A NATURAL NUMBER N TILL WHERE YOU CHOOSE TO SEE ODD NUMBERS PRINTED\n");
    scanf("%d",&n);
    printf("_____________\n");
    sum=0;
    k=1;
    for(i=1;i<=n;i++){
        sum+=k;
        k+=2;
        printf("%d\n", k);
    }
    return 0;
}