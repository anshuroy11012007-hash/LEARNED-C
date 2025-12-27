#include <stdio.h>
#include <string.h> 
int main() 
{
    char arr1[] = "colour";
    int len = strlen(arr1); 
    int i;
    printf("Original: %s\n", arr1);
    printf("Reversed: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", arr1[i]);
    }
    printf("\n"); 
    return 0;
}