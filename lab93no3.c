#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]);

int main() {
    char loginDB[5][64] = {"user1","user2","user3","user4","user5"};
    char passDB[5][64]  = {"pass1","pass2","pass3","pass4","pass5"};

    char inputLogin[64];
    char inputPass[64];

    printf("Login: ");
    scanf("%s", inputLogin);

    printf("Password: ");
    scanf("%s", inputPass);

    if (checkLogin(inputLogin, inputPass, loginDB, passDB))
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");

    return 0;
}

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]) {
    int i;
    for (i = 0; i < 5; i++) {
        if (strcmp(login, logindb[i]) == 0 && strcmp(passwd, passdb[i]) == 0) {
            return 1;
        }
    }
    return 0;
}
