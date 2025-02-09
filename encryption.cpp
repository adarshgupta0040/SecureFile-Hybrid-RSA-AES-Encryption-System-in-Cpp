#include "encryption.h"
#include <fstream>
#include <cctype>

using namespace std;

bool performCaesarCipher(string& content, bool encrypt) {
    int shift = encrypt ? 3 : -3;
    for (char& ch : content) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>((ch - base + shift + 26) % 26 + base);
        }
    }
    return true;
}

bool encryptFile(const string& filename, bool encrypt) {
    // Open the input file
    ifstream inFile(filename);
    if (!inFile) {
        return false;
    }

    // Read the content of the file
    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close();

    if (performCaesarCipher(content, encrypt)) {
        // Create an output file and write the modified content
        ofstream outFile(encrypt ? "encrypted_" + filename : "decrypted_" + filename);
        if (!outFile) {
            return false;
        }
        outFile << content;
        outFile.close();
    }

    return true;
}