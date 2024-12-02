// The Hangman Game is one of the most famous games played
// on computers.
// The Rules of the game are as follows:
// 1. There is given a word with omitted characters and you
// need to guess the characters to win the game.
// 2. Only 3 chances are available and if you win the Man
// survives or Man gets hanged.
// So, it is the game can be easily designed in C language with
// the basic knowledge of if-else statements, loops, and some
// other basic statements. The code of the game is easy, short,
// and user-friendly.

#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "nature";  
    char guess;               
    int chances = 3;          
    int correct = 0;          
    int i;
    int length = 6;        
    int found;                
    printf("Welcome to Hangman Game...!\n");
    while (chances > 0 && correct < length) {
        printf("\nCurrent word: ");
        for (i = 0; i < length; i++) {
            if (word[i] == guess) {
                printf("%c", word[i]);
            }
            else {
                printf("_");
            }
        }
        printf("\nYou have %d chances left.\n", chances);
        printf("Enter your guessed word (single letter in one go): ");
        scanf(" %c", &guess);  
        found = 0;
        for (i = 0; i < length; i++) {
            if (word[i] == guess) {
                found = 1;
                correct++;
            }
        }
        if (!found) {
            chances--;
            printf("Wrong guess attempt! You lost one chance.\n");
        }
        if (correct == length) {
            printf("\nCongratulations! \nYou guessed the word correctly.\nAnd the man is saved.: %s\n", word);
        }
        if (chances == 0) {
            printf("\nGame over... \nThe man was hanged as you lost...! \nThe correct word was: %s\n", word);
        }
    }
    return 0;
}