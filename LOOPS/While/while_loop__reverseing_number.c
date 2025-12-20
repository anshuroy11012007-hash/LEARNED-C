#include <stdio.h>
void main()
{
    int x=0; int y=0;
    printf("input a numbr\n");
    scanf("%d", &x);
    while(x>0){
        y=10*y+ (x%10);
        x=(x/10);
    }
    printf("the reversed number is %d.",y);
    return 0;
}