#include <stdio.h>

void main() {
    int *ptr;
    int age = 20;
    ptr = &age;
    // Using %p for pointers, %d for integer values
    printf("%d %p %p %p %d %d", age, (void*)ptr, (void*)&age, (void*)&ptr, *ptr, *(&ptr));
}