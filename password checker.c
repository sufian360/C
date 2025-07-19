#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *passwordFile;
    char secretPassword[100];
    char typedPassword[100];

    passwordFile = fopen("SecretPasswordFile.txt", "r");    //open the file for reading password
    if (passwordFile == NULL) {
        printf("Error opening password file.\n");
        return 1;
    }

    fgets(secretPassword, sizeof(secretPassword), passwordFile);
    secretPassword[strcspn(secretPassword, "\n")] = '\0';
    fclose(passwordFile);

    printf("Enter your password.\n");
    fgets(typedPassword, sizeof(typedPassword), stdin);
    typedPassword[strcspn(typedPassword, "\n")] = '\0';

    if (strcmp(typedPassword, secretPassword) == 0) {
        printf("Access granted\n");
    }
    if (strcmp(typedPassword, "12345") == 0) {
        printf("That password is one that an idiot puts on their luggage.\n");
    }
    else {
        printf("Access denied\n");
    }

    return 0;
}
