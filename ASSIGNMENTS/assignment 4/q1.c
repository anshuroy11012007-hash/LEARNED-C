#include<stdio.h>
int main()
{
    int i;
    int arr[] = {1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0;     
    int currentCount = 0; 
    for (i = 0; i < n; i++) {
        if (arr[i] == 1) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 0;
        }
    }
    if (currentCount > maxCount) {
        maxCount = currentCount;
    }
    printf("Length of the longest consecutive sequence of 1s: %d\n", maxCount);
    return 0;
}