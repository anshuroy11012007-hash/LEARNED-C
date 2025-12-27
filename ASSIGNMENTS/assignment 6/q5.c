#include <stdio.h>
int add() 
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    return sum;
}
int main() 
{
    int result;    
    printf("Calling function C...\n");
    result = add();
    printf("The sum (from main) is: %d\n", result);
    printf("Function C finished.\n");
    return 0;
}
