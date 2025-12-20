#include<stdio.h>
#include <string.h>
int main()
{
    float temp[7],max;
     int hottestday=0,i;
    printf("please enter all temperatures");

    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temp[i]); 
    }
   
    /*NOT SHOWN: Code to read independant for 7 days*/
    
    max = temp[7];
    for (i=1;i<7;i++){
        if (max<temp[i]){
            hottestday = i;
            max = temp[i];
        }
    }
    printf("the hotest day in a week is %d with temperature %f", hottestday, max);
    return 0;
}