#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    // Initialize random number generator
    srand(time(NULL));

    // Roll the dice
    int result = rollDice();

    // Print the result
    printf("The dice rolled: %d\n", result);

    return 0;
}