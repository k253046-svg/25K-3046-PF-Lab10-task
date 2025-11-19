#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int vowels, consonants, digits, spaces;
    int i, length;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    length = strlen(text);
    for(i = 0; i < length; i++) {
        char ch = text[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        } else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        } else if(ch >= '0' && ch <= '9') {
            digits++;
        } else if(ch == ' ') {
            spaces++;
        }
    }
    printf("Text: %s\n\n", text);
    printf("Statistics\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total characters: %d\n", length);
    return 0;
}

