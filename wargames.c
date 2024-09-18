#include <stdio.h>
#include <string.h>

// method to make printf output blue
void print_blue(const char *text) {
    printf("\033[38;5;153m%s\033[0m", text);
}

int main (void) {  

    char login[30];
    do {
        print_blue("Login: ");
        scanf("%s", login);
        
        if (strcmp(login, "Joshua") != 0){
            printf("\033[1;31mACCESS DENIED\033[0m\n");
        }
    } while(strcmp(login, "Joshua") != 0);

    print_blue("GREETINGS PROFESSOR FALKEN.");
}