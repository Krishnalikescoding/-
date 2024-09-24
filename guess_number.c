#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time() to seed srand()+45

int main()
{
    srand(time(0)); // Seed the random number generator with the current time

    int a = (rand() % 100) + 1; // Generate a random number between 1 and 100
    int b = 0;                  // number of guesses
    int c;                      // guessed
    int d = 6;                  // max number of attempts to guess the number to win the prize money
    int warningPrinted = 0;
    float bet_amount;
    printf("Welcome to the Guess the Number Game!\n");
    printf("Enter your bet amount:");
    scanf("%f", &bet_amount);

    printf("Lets's begin!!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");

    do
    {
        printf("Guess the nummber:");
        scanf("%d", &c);

        if (b > d && warningPrinted == 0)
        {
            printf("You have reached the maximum number of attempts, but you can continue guessing!\n");
            warningPrinted = 1;    // Set flag so that the message is printed only once
        }

        else if (c < a)
        {
            printf("Try Higher Number.\n");     //Hints
        }
        else if (c > a)
        {
            printf("Try Lower number.\n");      //Hints
        }

        else
        {
            printf("Congratulations!!!\n");
            printf("You guessed the correct number in %d attempts!!", b);
            if (b < d)
            {
                printf("You won a prize of %.2f rupees!!\n", bet_amount * 1.75);
            }
            else
            {
                printf("But since you exceeded the maximum attempts, you lost your money.\nBetter luck next time!");
            }
            return 0;       // End the game
        }
        b++;                // Increment the guess count
    } while (c != b);       // Continue until the correct number is guessed
    printf("Thank you for playing this game!!");

    return 0;
}
