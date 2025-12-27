#include<stdio.h>
int fact(int num)
{ 
    if (num == 0)
    {
        return 1;
    }
    else 
    {
        return num * fact(num -1);
    }
}
int main()
{
    int number;
    printf("please write a non negitive number\n ");
    int result;
    scanf("%d",&number);
    if(number<0)
    {
        printf("ERROR");
    }
    else{
        result = fact(number);
        printf("facorial of the number %d = %d", number, result);
    }
    return 0;
}
   