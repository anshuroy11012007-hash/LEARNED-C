#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    y = sqrt(5);
    printf("%d\n",y);
    do{
        printf(" enter a +ve number, a multiple of 3:");
        //it won't take any value that is not a multiple of 3//
        scanf("%d",&x);
    }
    while((x>0)&&(x%3!=0));
    return 0;
}