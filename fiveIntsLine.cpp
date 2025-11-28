// Created by: Shem
// Created on: 11/27/2025
// This program prints the integers from 1000 to 2000,
// displaying five numbers per line.
// Copyright 2025 Shem
#include <iostream>  // Required for input/output operations (cout, cin, endl)

int main() {
    // Print numbers from 1000 to 2000, 5 per line

    for (int year = 1000; year <= 2000; year++) {
        std::cout << year << " ";

        // Move to a new line after 5 numbers
        if (year % 5) {
            std::cout << std::endl;
        }
    }

    // Thank you message and ASCII art
    std::cout << "\nThank you for playing" << std::endl;
    std::cout << " /\\_/\\  " << std::endl;
    std::cout << "( ^_^ )" << std::endl;
    std::cout << " > ^ < " << std::endl;
}
