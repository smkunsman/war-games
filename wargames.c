#include <stdio.h>
#include <string.h>

// method to make printf output blue
void print_blue(const char *text) {
    printf("\033[38;5;153m%s\033[0m", text);
}

int main (void) {  

    char login[30];
    do {
        print_blue("Logon: ");
        scanf("%s", login);
        
        if (strcmp(login, "Joshua") != 0){
            printf("\033[1;31mACCESS DENIED\033[0m\n");
        }
    } while(strcmp(login, "Joshua") != 0);

    print_blue("GREETINGS PROFESSOR FALKEN.\n");

    char userInput[50];
    scanf("%s", userInput);

    // Specific input prompts a new loop and question
    print_blue("HOW ARE YOU FEELING TODAY?\n");

    // New string from user to respond
    scanf("%s", userInput);

    // Leads into a new loop for response prompts
    // User sets up speaker as a plug in for 
    // the computer to ‘talk’ at this point
    int plugInDevice[50];

    // New segment, wait for user’s input for
    // a new decision section
    print_blue("EXCELLENT. IT'S BEEN A LONG TIME. CAN YOU EXPLAIN THE REMOVAL OF YOUR MUSIC ACCOUNT UNTIL JUNE 23RD 1973?\n");
    scanf("%s", userInput);

    // When user input is the following, respond
    // accordingly and switch to the game section
    // and respective decisions
    print_blue("YES THEY DO. SHALL WE PLAY A GAME?\n");
    scanf("%s", userInput);

    // Enters into decision based on user’s string
    // Accepts user’s input but enters a loop to 
    // ask for game confirmation first
    print_blue("HOW ABOUT A GOOD GAME OF CHESS?\n");
    scanf("%s", userInput);

    // If the user persists with their prompt, pull up
    // the requested game.  If not, default to chess and
    // pull that up instead
}
