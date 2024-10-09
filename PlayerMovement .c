#include <stdio.h>

int main() {
    char move;
    int money = 0;

    printf("Enter moves (L for Left, R for Right, U for Up, D for Down). Enter 'X' to stop: \n");
    while (1) {
        scanf(" %c", &move);

        if (move == 'X') break;

        switch (move) {
            case 'L':
                money += 10;
                break;
            case 'D':
                money += 5;
                break;
            case 'R':
                money -= 8;
                break;
            case 'U':
                money -= 3;
                break;
            default:
                printf("Invalid move.\n");
        }
    }

    printf("Total money: $%d\n", money);
    return 0;
}
