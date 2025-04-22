// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array.




#include <stdio.h>

int main() {
    int arr[10];
    int i;
    
    // Taking input for array elements
    printf("Enter 10 elements for the array:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    // Display the array elements
    printf("\nThe array elements are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Pointer arithmetic demonstration
    int *ptr = arr;
    printf("\nFirst element: %d\n", *ptr);
    printf("Third element using pointer: %d\n", *(ptr+2));
    
    if(ptr+2 == &arr[2]) {
        printf("ptr+2 points to the third element of the array.\n");
    } else {
        printf("ptr+2 does not point to the third element of the array.\n");
    }
    
    return 0;
}