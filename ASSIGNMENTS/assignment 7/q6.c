#include <stdio.h>
int main() {
    int n, i;
    int arr[6]; 
    int *ptr;    

    printf("Enter the number of elements (max 6): ");
    scanf("%d", &n);
    ptr = arr;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", (ptr + i));
    }
    printf("\nThe elements entered are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}