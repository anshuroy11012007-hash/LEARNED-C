#include<stdio.h>

int main() {
    int a[8]; // An array to hold 8 integers
    int i;    // A variable to use as a loop counter

    // Prompt the user for input
    printf("Please enter 8 integer values:\n");

    // Use a loop to read 8 numbers from the user into the array
    for (i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }

    // --- Processing Step ---
    // Loop through each element of the array to check if it's even or odd
    for (i = 0; i < 8; i++) {
        // Use the modulo operator (%) to check for evenness
        if (a[i] % 2 == 0) {
            // If the number is even, replace it with 0
            a[i] = 0;
        } else {
            // If the number is odd, replace it with 1
            a[i] = 1;
        }
    }

    // --- Output Step ---
    // Print the modified array
    printf("\nThe new array (even numbers are 0, odd numbers are 1):\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", a[i]); // Print each element followed by a space
    }
    printf("\n"); // Print a final newline for clean formatting

    return 0;
}