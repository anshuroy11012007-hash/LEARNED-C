#include <stdio.h>
int main()
{
    int month,s;
    printf("please enter month number\n");
    scanf("%d",&month);
    if(month < 1 || month > 12){
        printf("Invalid month number");
        return 1;
    }
    if (month == 2){
        printf("THIS MONTH CONTAINS 28 DAYS.\n");
    }
    int month_num = month % 2;
    switch(month_num){
        case 1: 
            printf("THIS MONTH CONTAINS 30 DAYS.\n");
            break;
        case 0:
            printf("THIS MONTH CONTAINS 31 DAYS.\n");
            break;
    }
    return 0;
}