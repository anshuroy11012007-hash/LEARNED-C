#include <stdio.h>
#define N 10
int main()
{
    int p,i,prime[N],primeindex;
    int isprime;
    prime[0]=2;
    prime[1]=3;
    primeindex=2;
    for(p=5;p<=N;p=p+2){
        isprime=1;
        for(i=1;i<primeindex;i++){
            if(p%prime[i] == 0)
            isprime = 0;
        }
        if(isprime == 1){
            prime[primeindex]=p;
            ++primeindex;
        }
    }
    return 0;
}