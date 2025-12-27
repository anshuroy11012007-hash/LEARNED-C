#include<stdio.h>
int main()
{
    int i,j,sum,product;
    int a[3];
    printf("please enter 3 numbers for array\n");
    scanf("%d\n%d\n%d\n",&a[0],&a[1],&a[2]);
    sum = 0;
    product = 1;
    for(i=0;i<=a[2];i++){
        sum = sum + a[i];
        printf("sum of array numbers is %d\n", sum);
    }
    for (i=0;i<=a[2];i++){
        product = product * a[i];
         printf("product of array numbers is %d\n", product);
    }
    return 0;
}