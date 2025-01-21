// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2
// .

#include <stdio.h>
#define g 9.8

float force(float a){
    float x;
    x = a * g;
    return x;

}

int main(){
    float a;
    printf("Enter the mass of the body: ");
    scanf("%f", &a);
    printf("The force exerted on the body is: %.2f", force(a));
    return 0;
}