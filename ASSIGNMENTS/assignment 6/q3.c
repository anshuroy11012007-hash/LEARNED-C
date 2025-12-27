#include <stdio.h>
void add() 
{
    int a, b, sum;
    printf("Enter two numbers:\n ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum is: %d\n", sum);
}
int main()
{
    printf("Calling function A...\n");
    add();
    printf("Function A finished.\n");
    return 0;
}