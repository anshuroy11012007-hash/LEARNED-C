#include <stdio.h>
#include <stdlib.h> // Required for malloc, calloc, realloc, free

int main() {
    int *arr_malloc, *arr_calloc;
    int n = 5, i;
    printf("--- 1. Demonstrating MALLOC ---\n");
    printf("Allocating memory for %d integers using malloc...\n", n);
    arr_malloc = (int*)malloc(n * sizeof(int));
    if (arr_malloc == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d numbers for malloc array:\n", n);
    for (i = 0; i < n; i++) {
        arr_malloc[i] = i + 1; 
        printf("%d ", arr_malloc[i]);
    }
    printf("\n\n");
    printf("--- 2. Demonstrating CALLOC ---\n");
    printf("Allocating memory for %d integers using calloc...\n", n);
    arr_calloc = (int*)calloc(n, sizeof(int));
    if (arr_calloc == NULL) {
        printf("Memory allocation failed!\n");
        free(arr_malloc); 
        return 1;
    }
    printf("Values in calloc array (should be all 0):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n\n");
    printf("--- 3. Demonstrating REALLOC ---\n");
    int new_size = 10;
    printf("Resizing malloc array from %d to %d integers...\n", n, new_size);
    int *temp_ptr = (int*)realloc(arr_malloc, new_size * sizeof(int));
    if (temp_ptr == NULL) {
        printf("Reallocation failed!\n");
        free(arr_malloc);
        free(arr_calloc);
        return 1;
    } else {
        arr_malloc = temp_ptr;
    }
    for (i = n; i < new_size; i++) {
        arr_malloc[i] = i + 1; 
    }
    printf("Values in reallocated array:\n");
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr_malloc[i]);
    }
    printf("\n\n");
    printf("--- 4. Demonstrating FREE ---\n");
    free(arr_malloc);
    free(arr_calloc);
    arr_malloc = NULL;
    arr_calloc = NULL;
    printf("Memory successfully freed.\n");
    return 0;
}