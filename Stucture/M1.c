// #include <stdio.h>
// struct car
// {
//     char name[50];
//     int seats;
//     float price;
// };
// int main()
// {
//     int i;
//     struct car myCar[100];

//     for (i = 0; i < 100; i++)
//     {
//         printf("Enter data for car[%d]: \n" ); //“Enter data for car[%d]:\n”, i
//         scanf("%s %d %f", &myCar[i].name, &myCar[i].seats, &myCar[i].price); //“% s % d % f”, &myCar[i].name, &myCar[i].seats, &myCar[i].price)
//     }

//     for (i = 0; i < 100; i++)
//     {
//         printf("\nData about your car[%d] is: %s %d %f", i, myCar[i].name, myCar[i].seats, myCar[i].price);
//     }
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>


struct contact_mag
{
    char name[50];
    long int number;
};

int main(){
    int i, n;
    struct contact_mag cm[100];
    printf("Enter the value of n less than equal to 100...");
    scanf("%d", &n);
    for (i=0; i<n; i++){
        printf("Enter the name: \n");
        scanf("%*c"); // Clear the input buffer (newline from previous input)
        fgets(cm[i].name, 50, stdin);
        // Remove the trailing newline if present
        if (cm[i].name[strlen(cm[i].name) - 1] == '\n')
            cm[i].name[strlen(cm[i].name) - 1] = '\0';
        // The fgets above already gets the input, so remove the redundant scanf
        printf("Enter the number: ");
        scanf("%ld", &cm[i].number);  // Use %ld for long int and need &
    }
    printf("----------------DETAILS OF THE CONTACT----------------\n");
    for (i=0;i<n;i++){
        printf("%s\n", cm[i].name);
        printf("%ld\n", cm[i].number);
    }
    return 0;
}
