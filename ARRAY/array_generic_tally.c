#include <stdio.h>
int main(void)
{
    int count[6]={0,0,0,0,0,0},i,response;
    printf("enter your response\n");
    for(i=1;i<=8;++i){
    scanf("%d",&response);
    if (response<1||response>5)
        printf(" Bad response! Please enter a response from 0 to 5\nYour response is %d\n",response);
    else 
        ++count[response];
    }
    printf("\n\n rating Number of response\n");
    printf("---------\n");
    for(i=1;i<=5;++i){
        printf("%d = %d\n",i,count[i]);
    }
    return 0;
}