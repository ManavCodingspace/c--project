#include <iostream>
#include <string>

std::string encryptCaesar(const std::string& plaintext, int shift) {
    std::string ciphertext = "";
    for (char c : plaintext) {
        if (isalpha(c)) {  // Check if the character is a letter
            char shifted = (tolower(c) - 'a' + shift) % 26 + 'a';
            ciphertext += isupper(c) ? toupper(shifted) : shifted;
        } else {
            ciphertext += c;  // Preserve non-alphabet characters
        }
    }
    return ciphertext;
}
std::string decryptCaesar(const std::string& ciphertext, int shift) {
    return encryptCaesar(ciphertext, -shift);  // Decryption is just encryption with negative shift
}
int main() {
    std::string input;
    int shift;

    std::cout << "Enter text to encrypt or decrypt: ";
    std::getline(std::cin, input);

    std::cout << "Enter shift value (0-25): ";
    std::cin >> shift;

    std::string encrypted = encryptCaesar(input, shift);
    std::cout << "Encrypted text: " << encrypted << std::endl;

    std::string decrypted = decryptCaesar(encrypted, shift);
    std::cout << "Decrypted text: " << decrypted << std::endl;

    return 0;
}
