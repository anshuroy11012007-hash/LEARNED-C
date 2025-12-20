#include<stdio.h>
int main()
{
    int temp,u,v;
    printf("please enter number 1 and number 2\n");
    scanf("%d\n%d",&u,&v);
    /*code to read u and v from user here*/
    while(v!=0){
        temp= u%v;
        u=v;
        v= temp;
    }
    printf("GCD IS %d\n",u);
    return 0;
}