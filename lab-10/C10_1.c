#include <stdio.h>

#define N 1234
#define LOWEST 0
#define HIGHEST 100
#define MAX_ATTEMPTS 10

int main(void) {
    int secret = N % 100;
    int guess;
    int num_attempts = 0;
    int game_over = 0;

    while (!game_over) {
        do {
            printf("Enter guess: ");
            scanf("%d", &guess);

            if (guess < LOWEST || guess > HIGHEST)
                printf("Out of range, try again.\n");
        } while (guess < LOWEST || guess > HIGHEST);

        num_attempts++;

        if (guess < secret)
            printf("Too low.\n");
        else if (guess > secret)
            printf("Too high.\n");
        else
            printf("Correct! You took %d guesses.\n", num_attempts);

        if (guess == secret || num_attempts == MAX_ATTEMPTS)
            game_over = 1;
    }

    if (guess != secret)
        printf("Out of guesses. The answer was %d.\n", secret);

    return 0;
}
