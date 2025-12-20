#include <stdio.h> 
int main() 
{ 
    int i,k,sum,n; 
    printf(" PLEASE ENTER A NATURAL NUMBER N TILL WHERE YOU CHOOSE TO SEE EVEN NUMBERS PRINTED\n"); 
    scanf("%d",&n); 
    printf("_____________\n"); 
    sum=0; 
    k=2; 
    for(i=2;i<=n;i++){ 
        sum+=k; 
        k+=2; 
        printf("%d\n", k);} 
    return 0; 
}