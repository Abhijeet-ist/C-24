#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n, i, new_n;
    
  
    printf("Enter the initial size of array: ");
    scanf("%d", &n);
    
    ptr = (int*)malloc(n * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    
    
    printf("The array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
   
    printf("Enter the new size of array: ");
    scanf("%d", &new_n);
    
    ptr = (int*)realloc(ptr, new_n * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    

    if (new_n > n) {
        printf("Enter %d more integers:\n", new_n - n);
        for (i = n; i < new_n; i++) {
            scanf("%d", ptr + i);
        }
    }

    printf("The array elements after reallocation are:\n");
    for (i = 0; i < new_n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    free(ptr);
    
    return 0;
}