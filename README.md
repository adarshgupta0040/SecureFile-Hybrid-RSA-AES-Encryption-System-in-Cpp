# SecureFile: Hybrid RSA-AES Encryption System in C++

# Overview

SecureFile is a C++-based file encryption and decryption system that combines AES (Advanced Encryption Standard) for fast encryption and RSA (Rivest-Shamir-Adleman) for secure key exchange. This hybrid approach ensures both speed and security, making it ideal for protecting sensitive data.

![image](https://github.com/user-attachments/assets/678723ae-38ce-4eb2-b4c3-4b5eb9b287f8)


# Features

Hybrid Encryption: Uses AES for data encryption and RSA for AES key encryption.

Industry-Standard Security: Utilizes OpenSSL for robust cryptographic implementations.

Modular Design: Follows an industry-standard file structure with separate encryption, key management, and main logic files.

Cross-Platform: Runs on Linux, macOS, and Windows.

# Security Model

AES (256-bit) encrypts the actual file data for fast, secure encryption.

RSA (2048-bit) encrypts the AES key, ensuring secure key transmission.

AES key is securely generated and never stored in plain text.

# Future Enhancements

Support for different AES modes (e.g., CBC, GCM).

Command-line arguments for file selection.

Secure key storage in hardware security modules (HSMs).

# License

This project is licensed under the MIT License.

# Author

Developed by Adarsh Gupta 🚀
