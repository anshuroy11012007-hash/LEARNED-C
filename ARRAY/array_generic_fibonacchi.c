#include <stdio.h>
#define N 40
int main(void)
{
    int fib[N];
    int i;
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<N;i++){
        fib[i]= fib[i-1] +fib[i-2];
    }
    for(i=0;i<N;i++){
        printf(" fibenochi number %d = %d\n",i,fib[i]);
    }
    return 0;
}