#include <stdio.h>

int main(){
    int choice;
    float perimeter, length, breadth, side, radius, pi = 3.14159;

    printf("Choose a shape to calculate the perimeter:\n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            perimeter = 2 * (length + breadth);
            printf("The perimeter of the rectangle is: %.2f\n", perimeter);
            break;
        case 2:
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            perimeter = 4 * side;
            printf("The perimeter of the square is: %.2f\n", perimeter);
            break;
        case 3:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            perimeter = 2 * pi * radius;
            printf("The perimeter of the circle is: %.2f\n", perimeter);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}


#include <stdio.h>
// #define dol 74.85
// #define euro 101.28

int main(){
    int choice;
    float curr;
    printf("Enter your currency: ");
    scanf("%f", &curr);
    printf("Choose what you want to convert\n1. INR to DOLLAR\n2. DOLLAR to INR\n3. INR to POUNDS\n4. POUNDS to INR");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            printf("INR to DOLLAR: %.2f\n", curr / 74.85);
            break;
        case 2:
            printf("DOLLAR to INR: %.2f\n", curr * 74.85);
            break;
        case 3:
            printf("INR to POUNDS: %.2f\n", curr / 101.28);
            break;
        case 4:
            printf("POUNDS to INR: %.2f\n", curr * 101.28);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}