/*PROJECT 1: NUMBER GUESSING GAME
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     // Seed the random number generator using the current time
//     srand(time(0)); 

//     // Generate a random number between 1 and 100
//     int randomNumber = (rand() % 100) + 1;
//     int guess;
//     // Print the random number
//     printf("Random number between 1 and 100: %d\n", randomNumber);
//     do{
//       printf("Guess a number: ");  
//       scanf("%d",&guess);
//       if (guess<randomNumber){
//         printf("Please guess a higher number\n");
//       } else if (guess == randomNumber+1 || guess == randomNumber-1) {
//         printf("You are very close be alert\n");
//       } else if (guess > randomNumber) {
//         printf("Please guess a lower number\n");
//       }

//     } while(guess!=randomNumber);
//     printf("Congratulations! You guessed the correct number.\n");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     // Initialize random number generator
//     srand(time(0));

//     // Generate random number between 1 and 100
//     int randomNumber = (rand() % 100) + 1;
//     int no_of_guesses = 0;
//     int guessed_number;

//     // Print the random number
//     // printf("Random Number: %d\n", randomNumber);

//     do
//     {
//         printf("Guess the number");
//         scanf("%d", &guessed_number);
//         if(guessed_number>randomNumber){
//             printf("Lower number please!\n");
//         }
//         else if(guessed_number<randomNumber){
//             printf("Higher number please!\n");
//         }
//         else{
//             printf("Congrats!!\n");
//         }
//         no_of_guesses++;

//     } while (guessed_number != randomNumber);

//     printf("You guessed the number in %d guesses", no_of_guesses);

//     return 0;
// }

#include<stdio.h>
    
int main() {
  int a = 248755;
  printf("%d",((a/10)+(a%10)));
  return 0;
}