#include <stdio.h>
#define N 6
int main(void)
{
    int value[N];
    int i;
    for (i=0;i<N;i++){
    printf("enter value of element number %d:\n",i);
    scanf("%d",&value[i]);
}
for (i=0;i<N;i++){
    printf("%d= %d\n",i,value[i]);
}
    return 0;
}