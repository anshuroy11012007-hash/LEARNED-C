#include <stdio.h>
void swap_by_value(int x, int y) 
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside function (local copies): x = %d, y = %d\n", x, y);
}
int main() 
{
    int a = 10, b = 20;
    printf("--- Demonstrating Call by Value ---\n");
    printf("In main BEFORE swap: a = %d, b = %d\n", a, b);
    swap_by_value(a, b);
    return 0;
}