#include <stdio.h>

int main()
{
    // A is just a NAME for an integer variable
    int A; 
    
    // B is a NAME for a character variable
    char B;

    // This prints the size of the 'int' data type
    printf("Size of the int variable 'A': %u bytes\n", sizeof(A));

    // This prints the size of the 'char' data type
    printf("Size of the char variable 'B': %u byte\n", sizeof(B));
    
    // This also prints the size of the 'char' data type
    printf("Size of the 'char' type itself: %u byte\n", sizeof(char));

    return 0;
}