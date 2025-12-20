#include<stdio.h>
int main()
{
    float temp[7];
    float sum=0.0, average;
    int i,avg;
    for (i=0;i<7;i++){
        scanf("%f",&temp[i]);
    }
    for(i=0;i<7;i++){
        sum += temp[i];
    }
    avg=sum/7;
    printf(" average temperature is %d",avg);
    return 0;
}