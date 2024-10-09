#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return (rand() % 6) + 1;
}

int main() {
    int userInput, dice1, dice2;

    srand(time(0)); // Seed for random number generation

    printf("Enter an integer between 1 and 6: ");
    scanf("%d", &userInput);

    dice1 = rollDice();
    dice2 = rollDice();

    printf("Dice 1: %d\n", dice1);
    printf("Dice 2: %d\n", dice2);

    if (userInput == dice1 && userInput == dice2) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}

