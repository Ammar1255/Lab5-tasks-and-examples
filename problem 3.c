#include <stdio.h>

char encrypt(char ch) {
    
    char key = 0x5A; 
    return ch ^ key; 
}

char decrypt(char ch) {
    
    char key = 0x5A; 
    return ch ^ key; 
}

int main() {
    char originalChar, encryptedChar, decryptedChar;

    
    printf("Enter a character to encrypt: ");
    scanf(" %c", &originalChar);

    
    encryptedChar = encrypt(originalChar);
    printf("Encrypted character: %c\n", encryptedChar);

    
    decryptedChar = decrypt(encryptedChar);
    printf("Decrypted character: %c\n", decryptedChar);

    return 0;
}
