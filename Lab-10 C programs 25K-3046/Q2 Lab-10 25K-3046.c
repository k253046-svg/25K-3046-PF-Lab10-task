#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char *atPos;

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    atPos = strchr(email, '@');
    if (atPos != NULL && strlen(atPos) > 1) {
        printf("Domain: %s\n", atPos + 1);
    } else {
        printf("Domain: Invalid email\n");
    }

    return 0;
}

