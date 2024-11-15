#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    srand(time(0));

    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Your choice: ");
    scanf("%d", &userChoice);

    // Input validation
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please enter a number between 1 and 3.\n");
        return 1;
    }

    // Generate computer's choice (1, 2, or 3)
    computerChoice = rand() % 3 + 1;

    printf("Computer chose: ");
    if (computerChoice == 1) {
        printf("Rock\n");
    } else if (computerChoice == 2) {
        printf("Paper\n");
    } else {
        printf("Scissors\n");
    }

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
