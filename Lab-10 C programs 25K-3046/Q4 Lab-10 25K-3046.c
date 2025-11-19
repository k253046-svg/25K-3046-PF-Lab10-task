#include <stdio.h>
#include <string.h>

int main() {
    char text[100], enc[100], dec[100];
    int i;

    printf("Enter a message: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    for(i = 0; i < strlen(text); i++) {
        if(text[i] >= 'a' && text[i] <= 'z') {
            enc[i] = text[i] + 3;
            if(enc[i] > 'z') enc[i] -= 26;
        } else if(text[i] >= 'A' && text[i] <= 'Z') {
            enc[i] = text[i] + 3;
            if(enc[i] > 'Z') enc[i] -= 26;
        } else {
            enc[i] = text[i];
        }
    }
    enc[i] = '\0';
    
    for(i = 0; i < strlen(text); i++) {
    	if(enc[i] >= 'a' && enc[i] <= 'z') {
            dec[i] = enc[i] - 3;
            if(dec[i] < 'a') dec[i] += 26;
        } else if(enc[i] >= 'A' && enc[i] <= 'Z') {
            dec[i] = enc[i] - 3;
            if(dec[i] < 'A') dec[i] += 26;
        } else {
            dec[i] = enc[i];
        }
    }
    dec[i] = '\0';
    printf("Original: %s\n", text);
    printf("Encrypted: %s\n", enc);
    printf("Decrypted: %s\n", dec);
    return 0;
}

