#include <stdio.h>
int findHCF(int a, int b) 
{
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b; 
        a = temp; 
    }
    return a;
}
long long findLCM(int a, int b, int hcf) 
{
    return ((long long)a * b) / hcf;
}
int main() 
{
    int num1, num2;
    int hcf_result;
    long long lcm_result;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Error: Please enter positive integers.\n");
    } 
    else 
    {
        hcf_result = findHCF(num1, num2);
        lcm_result = findLCM(num1, num2, hcf_result);
        printf("The HCF of %d and %d is: %d\n", num1, num2, hcf_result);
        printf("The LCM of %d and %d is: %lld\n", num1, num2, lcm_result);
    }
    return 0;
}