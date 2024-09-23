#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time() to seed srand()+45

int main()
{
    srand(time(0)); // Seed the random number generator with the current time

    int a = (rand() % 100) + 1; // Generate a random number between 1 and 100
    int b = 0;                  // number of guesses
    int c;                      // guessed
    do
    {
        printf("Guess the nummber:");
        scanf("%d", &c);

        if (c < a)
        {
            printf("Higher Number.\n");
        }
        else if (c > a)
        {
            printf("Lower number.\n");
        }
        else
        {
            printf("Congratulations!!!\n");
            printf("You guessed the correct number in %d attempts!!", b);
            break;
        }
        b++;
    } while (c != b);

    return 0;
}