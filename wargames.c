#include <stdio.h>
#include <string.h>>

int main (void) {  
    char login[30];
    printf("Login: ");
    scanf("%s", login);

    do while (strcmp(login, "Joshua") != 0){
        printf("Access Denied");
    }


}


