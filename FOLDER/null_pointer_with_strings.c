#include <stdio.h>

int main() {
    char *str[20];
    int *ptr = NULL;
    printf("%p",ptr);

    // Using scanset in scanf 
    // to read until newline
    printf("enter a string:");
    fgets(str, 20, stdin);

    // Printing the read string
    printf("%s", str);

    return 0;
}