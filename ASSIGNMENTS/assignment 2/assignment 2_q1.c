#include <stdio.h>
int main()
{
    int m1,m2,m3,sum;
    float percentage;
    printf("please enter marks in m1,m2,m3\n");
    scanf("%d%d%d\n",&m1,&m2,&m3);
    sum=m1 + m2 + m3;
    printf("sum of your marks is %d\n",sum);
    percentage=(sum / 300.0) * 100.0;
    printf("percentage of your marks is %.2f\n",percentage);
    if (percentage >=90) {
                printf("PASS!YOUR GRADE IS O");
            }
    else 
            if(percentage >=80){
                printf("PASS!YOUR GRADE IS A");
            }
        
    else if(percentage >=60){
            {
            printf("PASS!YOUR GRADE IS B");
            }
        
        }
    else if (percentage >=40){
        printf("PASS!YOUR GRADE IS C");
        }
    else{
            printf("ER! PLEASE REPEAT THE GRADE");
        }
        return 0;
        }