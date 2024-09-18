#include <stdio.h>
#include <string.h>

int main (void) {  

    char login[30];
    do {
        printf("Login: ");
        scanf("%s", login);
        
        if (strcmp(login, "Joshua") != 0){
            printf("Access Denied\n");
        }
    } while(strcmp(login, "Joshua") != 0);

    printf("in");

}