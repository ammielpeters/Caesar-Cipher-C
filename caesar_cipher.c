#include <stdio.h>
#include <string.h>

// Caesar Cipher Encryption
void caesarCipher(char text[], int shift) {
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        // Process only uppercase letters
        if (text[i] >= 'A' && text[i] <= 'Z') {
            // Convert character to 0–25 range, shift, wrap around using %26
            text[i] = ((text[i] - 'A' + shift) % 26) + 'A';
        }
        // If you want to skip non-letters, just leave them unchanged
    }
}

int main() {
    char text[100];
    int shift;

    printf("Enter text (UPPERCASE only): ");
    scanf("%s", text);

    printf("Enter shift (0-25): ");
    scanf("%d", &shift);

    caesarCipher(text, shift);

    printf("Encrypted text: %s\n", text);

    return 0;
}
