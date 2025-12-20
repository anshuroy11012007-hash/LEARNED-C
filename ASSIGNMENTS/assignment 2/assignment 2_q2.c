#include <stdio.h>

int main() {
    int date;

    // Prompt the user for input
    printf("Please enter a date of the month (1-31): ");
    scanf("%d", &date); // Use %d to read an integer

    // Validate the user's input
    if (date < 1 || date > 31) {
        printf("Invalid date. Please enter a number between 1 and 31.\n");
        return 1; // Exit with an error code
    }

    // Calculate the remainder when the date is divided by 7
    int day_code = date % 7;

    // Determine the day of the week based on the remainder (day_code)
    // This assumes the 1st day of the month is a Wednesday.
    switch (day_code) {
        case 1:
            printf("It's a WEDNESDAY\n");
            break;
        case 2:
            printf("It's a THURSDAY\n");
            break;
        case 3:
            printf("It's a FRIDAY\n");
            break;
        case 4:
            printf("It's a SATURDAY\n");
            break;
        case 5:
            printf("It's a SUNDAY\n");
            break;
        case 6:
            printf("It's a MONDAY\n");
            break;
        case 0: // A date divisible by 7 (e.g., 7, 14, 21) will have a remainder of 0
            printf("It's a TUESDAY\n");
            break;
    }

    return 0; // Exit successfully
}






