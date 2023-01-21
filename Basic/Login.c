#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    char correctUsername[20] = "admin";
    char correctPassword[20] = "admin123";

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Access granted!\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
