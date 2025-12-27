#include <stdio.h>
void add(int a, int b) {
    int sum;
    sum = a + b;
    printf("The sum is: %d\n", sum);
}
int main() 
{
    int num1 = 10, num2 = 20;
    printf("Calling function B with 10 and 20...\n");
    add(num1, num2);
    printf("Function B finished.\n");
    return 0;
}
