/*Rock Paper Scissor (which is also called Stone Paper
Scissor) is a hand game and played between two people, in
which each player simultaneously forms one of three shapes.
The winner of the game is decided as per the below rules:

• Rock vs Paper -> Paper wins.
• Rock vs Scissor -> Rock wins.
• Paper vs Scissor -> Scissor wins.

In this game, the user will be asked to make choice and
according to the choice of user and computer and then the
result will be displayed along with the choices of both computer
and user.

Note: This random number will decide the choice of computer
as:
• If the number is between 0-33 then the choice will be
Rock.
• If the number is between 33-66 then the choice will be
Paper.
• If the number is between 66-100 then the choice will be
Scissors.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function to decide the winner
const char* decideWinner(const char* userChoice, const char* compChoice) {
    // strcmp--> function used to compare two strings.
    if (strcmp(userChoice, compChoice) == 0) {
        return "It's a tie!";
    }
    if ((strcmp(userChoice, "Rock") == 0 && strcmp(compChoice, "Scissors") == 0) ||
        (strcmp(userChoice, "Paper") == 0 && strcmp(compChoice, "Rock") == 0) ||
        (strcmp(userChoice, "Scissors") == 0 && strcmp(compChoice, "Paper") == 0)) {
        return "Hurray! You won!";
    }
    return "Oops! Computer won!";
}

// Function to generate the computer's choice based on a random number
const char* computer_choice() {
    int rand_num = rand() % 101;          // Random number between 0 & 100
    if (rand_num <= 33) {
        return "Rock";
    }
    else if (rand_num <= 66) {
        return "Paper";
    }
    else {
        return "Scissors";
    }
}


   int main() {
    /*Seeds the random number generator with the current time, 
    which ensures that the sequence of random numbers is different each time the program runs.*/
    srand(time(NULL));
    
    char userChoice[10];
    printf("Welcome to Rock, Paper, Scissors Game...!\n");
    printf("Enter your choice among (Rock, Paper, Scissors): ");
    scanf("%s", userChoice);

    // To normalize user's input to first letter capitalized
    if (userChoice[0] >= 'a' && userChoice[0] <= 'z') {
        userChoice[0] = userChoice[0] - 'a' + 'A';
    }

    // Rectifying user's input
    if (strcmp(userChoice, "Rock") != 0 && strcmp(userChoice, "Paper") != 0 && strcmp(userChoice, "Scissors") != 0) {
        printf("Invalid choice! Please enter Rock, Paper, or Scissors.\n");
        return 1;             // Exit the program after getting an invalid input
    }

    // Get computer's choice
    const char* compChoice = computer_choice();

    // Display choices
    printf("Your choice: %s\n", userChoice);
    printf("Computer's choice: %s\n", compChoice);

    // Determine and display the winner
    const char* result = decideWinner(userChoice, compChoice);
    printf("%s\n", result);

    return 0;
}
