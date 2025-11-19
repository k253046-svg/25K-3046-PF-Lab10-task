#include <stdio.h>
#include <string.h>

int main() {
    char passInput[200];
    int lenCount = 0, hasUpper = 0, hasNum = 0, hasSpec = 0;
    int i;

    printf("Enter password: ");
    fgets(passInput, sizeof(passInput), stdin);

    passInput[strcspn(passInput, "\n")] = '\0';

    lenCount = strlen(passInput);

    for (i = 0; i < lenCount; i++) {
        char ch = passInput[i];

        if (ch >= 'A' && ch <= 'Z') {
            hasUpper = 1;
        }

        if (ch >= '0' && ch <= '9') {
            hasNum = 1;
        }

        if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%') {
            hasSpec = 1;
        }
    }

    if (lenCount >= 8 && hasUpper == 1 && hasNum == 1 && hasSpec == 1) {
        printf("Password is strong.\n");
    } else {
        printf("Password is weak.\n");
    }

    return 0;
}

