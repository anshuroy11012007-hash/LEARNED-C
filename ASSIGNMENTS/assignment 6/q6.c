#include <stdio.h>
int add(int a, int b) 
{
    return a + b;
}
int main() 
{
    int num1 = 50, num2 = 25;
    int result;
    printf("Calling function D with 50 and 25...\n");
    result = add(num1, num2);
    printf("The sum (from main) is: %d\n", result);
    printf("Calling function D again with 100 and 200...\n");
    result = add(100, 200);
    printf("The new sum (from main) is: %d\n", result);
    printf("Function D finished.\n");
    return 0;
}